// program to relate two integers using =, >, or < symbol
#include<stdio.h>
int main()
{
  int number1, number2;
  printf("Enter two integers: ");
  scanf("%d %d", &number1, &number2);

  // checks if the two integers are equal.
  if(number1 == number2)
  {
    printf("Result: %d = %d", number1, number2);
  }

  // checks if number1 is greater that number2.
  else if (number1 > number2)
  {
    printf("Result: %d > %d", number1, number2);
  }

  // checks if both test expression are false
  else
  {
    printf("Result: %d < %d", number1, number2);
  }

  return 0;
}

/*
if...else ladder

if...else statement executes two different codes depending upon
whether the test expression is true or false. Sometimes, a choice
has to be made from more than 2 possibilities.

the if...else ladder allows you to check between multiple test
expression and execute different statements
*/
