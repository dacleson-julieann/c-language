// print number from 1 to 10

#include<stdio.h>

int main()
{
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }

  return 0;
}
/*
> i is initialized to 1.
> the test expression i < 11 is evaluated. Since 1 less than 11 is true,
the body of for loop is executed. this will print the 1 (value of i)
on the screen.
> the update statement ++i is executed. now, the value of i will be
2. again, the test expression is evaluated to true, and the body of for
loop is executed. This will print 2 (value of i) on the screen.
> again, the update statement ++i is executed and the test expression
i < 11 is evaluated. this process goes on until i becomes 11.
> when i becomes 11 , i < 11 will be false, and the for loop termintes.
*/
