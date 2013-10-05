#include <stdio.h>

int main() {

  // string to int
  char str1[] = "42";
  int int1;
  sscanf(str1, "%d", &int1); // 3rd argument requires an address
  printf("%d", int1); // 42
  
  // int to string
  char str2[3];
  int int2 = 24;
  sprintf(str2, "%d", int2); // 3rd argument requires a value
  printf("%s", str2); // "24"

  getchar();
  return 0;
}