#include <stdio.h>

int counter(bool firstCall=0) {
  // static = the value is not forgotten in next function call
  static int i;
  if(firstCall) i = 0;
  else i = (i+1)*2;
  return i;
}


int main() {
  counter(1);
  // the "i" defined below is not the "i" defined in counter function
  for(int i=0; i<5; ++i) printf("%d ",counter());
  getchar();
}