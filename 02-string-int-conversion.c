#include <stdio.h>
#include <string.h>

int main() {

  // string to two ints
  char str1[] = "42;64";
  int int1a, int1b;
  sscanf(str1, "%d;%d", &int1a, &int1b);
  printf("first: %d, second: %d\n", int1a, int1b);
  
  // string to array of digits
  char number[] = "5318008"; // http://youtu.be/Gg9kSn3NRVk
  int d[7];
  // number+i = string starting at i-th character
  // %1d = read at most one digit
  for(int i=0; i<7; ++i) sscanf(number+i, "%1d", &d[i]);
  for(int i=7; i>0; --i) printf("%d", d[i-1]); // 8008135
  
  // comma separated string to array of strings
  char plumcake[] = "1c of sugar, 1c of milk, 2c of flour, two eggs, 0.5c of oil, yeast, plums";
  char item[32][32];
  int i = 0;
  char *p; // or char* p // or char * p
  for(p=strtok(plumcake,","); p!=NULL; p=strtok(NULL,",")) strcpy(item[i++], p);
  puts(item[3]); // 4th item

  getchar();
  return 0;
}