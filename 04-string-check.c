#include <stdio.h>

/*
  Forces the user to input number between MIN and MAX.
  Asks for input repeatedly if:
   - input is not a number
   - input is out of range
   - input contains anything else than number
*/
int main(int argc, char* argv[]) {
  int MIN=-20, MAX=60; // specify the range here
  char appendix; int inputOk; // for checking the rest of input buffer
  int input; // contains the typed number
  
  do {
    printf("Zadej cele cislo od %d do %d :", MIN, MAX);
    inputOk = scanf("%d", &input); // returns 1 if the input starts with number
    scanf("%c", &appendix); // check the character after the number
    if(appendix!='\n') scanf("%*[^\n]"); // if not enter, flush the input buffer
  } while(inputOk<1 || input<MIN || input>MAX || appendix!='\n');
  
  printf("The number is: %d", input);
  
  getchar();
  return 0;
}