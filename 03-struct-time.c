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
  human b { "Bob", 20 }; // declaration with definition
  human* c = &a; // pointer to struct (c points to address of a)
  // x->y is equivalent to (*x).y
  // *x.y is equivalent to *(x.y)
  printf("%s is %d, %s is %d, %s is %d\n", a.name, a.age, c->name, (*c).age, b.name, b.age);

  // working with time
  time_t timestamp = time(NULL);
  tm* now = localtime(&timestamp);
  printf("Current time: %d:%d:%d", now->tm_hour, now->tm_min, now->tm_sec); 
  
  getchar();
  return 0;
}