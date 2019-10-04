// program to display a number if it is negative

#include<stdio.h>
int main()
{
  int number;

  printf("Enter an integer: ");
  scanf("%d", &number);

  // true if number is less than 0
  if (number < 0)
  {
    printf("You entered %d.\n" number);
  }

  printf("The if statement is easy.");

  return 0;
}
/*
the if statement evaluates the test expression inside the parenthesis().
> if the test expression is evaluated to true, statements inside the body
of if are executed.
> if the test expression is evaluated to false, statements inside the body
of if are not executed.
*/
