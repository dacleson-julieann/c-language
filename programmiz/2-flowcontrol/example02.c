// check whether an integer is odd or even
#include<stdio.h>
int main()
{
  int number;
  printf("Enter and integer: ");
  scanf("%d", &number);

  // true if the remainder is 0
  if (number % 2 == 0)
  {
    printf("%d is an even integer.", number);
  }
  else
  {
    printf("%d is an odd integer.", number);
  }

  return 0;
}
/*
if...else statement works

if the test expression is evaluated to true,
>> statements inside the body of if are executed.
>> statements inside the body of else are skipped from execution.

if the test expression is evaluated to false,
>> statements inside the body of else are executed
>> statements inside the body of if are skipped from execution.
*/
