#include <stdio.h>
#include <stdlib.h>

int add1(int n) {
  n = n + 2;
  return n;
}

int add2(int* n) {
  *n = *n + 2;
  return *n;
}

int main() {
  int x1 = 5;
  int y1 = add1(x1);
  printf("%d, %d\n", x1, y1); // 5 7

  int* x2 = (int*)malloc(sizeof(int)); // dynamic memory allocation
  *x2 = 5; // definition
  int y2 = add2(x2);
  printf("%d, %d\n", *x2, y2); // 7 7

  getchar();
}