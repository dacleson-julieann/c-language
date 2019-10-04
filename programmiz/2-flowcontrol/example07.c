// print number from 1 to 5.
#include<stdio.h>

int main()
{
  int i = 1;

  while (i <= 5)
  {
    printf("%d\n", i);
    ++i;
  }

  return 0;
}
/*
>> when i is 1, the test expression i <= 5 is true. hence, the body of
while loop is executed. this prints 1 on the screen and the value of i is
increased to 2.
>> now, i is 2, the test expression i <= 5 is again true. the body of the
while loop is executed again. this prints 2 on the screen and
the value of i is increased to 3.
>> this process goes on until i become 6. when i is 6, the test expression
i <= 5 will be false and the loop terminates.
*/

/*
while loop works
> the while loop evaluates the test expression inside the parenthesis ().
> if the test expression is true, statements inside the body of while
loop are executed. then, test expression is evaluated again.
> the process goes on until the test expression is evaluated to false.
> if the test expression is false, the loop terminates (ends)
*/
