#include <stdio.h>

int main() {
  // working with pointers
  int y1 = 7;  
  int* x1 = &y1; // x points to address of y
  y1 = 10; // x is also affected
  printf("%d", *x1); // 10


  int x2 = 5;
  int y2 = add2(x2);
  printf("%d, %d", *x2, y2);

  getchar();
}