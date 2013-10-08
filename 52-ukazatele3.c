#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// automatic memory
const char* getHello1() {
  char result[] = "hello";
  return result;
}

// static memory
const char* getHello2() {
  static char result[] = "hello";
  return result;
}


// dynamic memory
const char* getHello3() {
  char* result = (char*)malloc(6);
  strcpy(result,"hello");
  return result;
}

int main() {
  puts(getHello1()); // garbage
  puts(getHello2()); // hello
  puts(getHello3()); // hello
  getchar();
}