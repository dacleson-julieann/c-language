// program to calculate the sum of first n natural numbers
// positive integers 1,2,3...n are known as natural numbers

#include<stdio.h>

int main()
{
  int num, count, sum = 0;

  printf("Enter a positive number: ");
  scanf("%d", &num);

  // for loop terminates when num is less than count
  for(count = 1; count <= num; ++count)
  {
    sum += count;
  }

  printf("Sum = &d", sum);

  return 0;
}
/*
the value entered by the user is stored in the variable num. suppose,
the user entered 10.

the count is initialized to 1 and the rest test expression is evaluated.
since the test expression count<=num (1 less than or equal to 10) is true,
the body of for loop is executed and the value of sum will equal to 1.

then, the update statement ++ count is executed and the count will
equal to 2. again, the test expression is evaluated. since 2 is also less
than 10, the test expression is evaluated to true and the body of for loop is
executed. now, the sum will equal 3.

this process goes on and the sum is calculted until the count reaches 11.

when the count is 11, the test expression is evaluated to 0 (false),
and the loop terminates.

then, the value of sum is printed on the screen.
*/
