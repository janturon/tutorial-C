#include <stdio.h>
#include <string.h>
#include <time.h>

struct human {
  char name[32];
  int age;
}; // note the ;


int main() {

  // working with structs
  human a; // declaration
  strcpy(a.name, "Ann"); a.age = 16; // definition
  human b = { "Bob", 20 }; // declaration with definition
  human* c = &a; // pointer to struct (c points to address of a)
  // x->y is equivalent to (*x).y
  // *x.y is equivalent to *(x.y)
  printf("%s is %d, %s is %d, %s is %d\n", a.name, a.age, c->name, (*c).age, b.name, b.age);
  
  // working with time
  time_t timestamp = time(NULL);
  tm* now = localtime(&timestamp);
  printf("Current time: %d:%d:%d\n", now->tm_hour, now->tm_min, now->tm_sec);
  
  // what date will be next week?
  time_t timestampNextWeek = timestamp + 7 * 24 * 3600; // seconds in week
  tm* nextWeek = localtime(&timestampNextWeek);
  printf("Next week the date will be %d.%d.\n", nextWeek->tm_mday, nextWeek->tm_mon+1);  
  
  // what day of week there will be the first day next month?
  const char* wdays[7] = { "nedØle", "pondØl¡", "£terì", "stýeda", "Ÿtvrtek", "p tek", "sobota" };
  now->tm_mon++;
  //  if(now->tm_mon==12) { now->tm_mon = 0; now->tm_year++; } // not necessary
  now->tm_mday = 1;
  time_t nextMonthStamp = mktime(now);
  tm* nextMonth = localtime(&nextMonthStamp);
  printf("1.%d. je %s\n", nextMonth->tm_mon+1, wdays[nextMonth->tm_wday]);
  
  getchar();
  return 0;
}