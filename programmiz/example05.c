// example 5: integer input/output

#include<stdio.h>
int main()
{
  int testInteger;
  printf("Enter an Integer: ");
  scanf("%d", &testInteger);
  printf("Number = %d", testInteger);
  return 0;
}

/*
here, we have used the %d format specifier inside the scanf() function
to take int input from the user. when the user enters an integer, it is
stored in the testInteger variable.

notice, that we have used &testInteger inside scanf(). it is because
&testInteger gets the address of the testInteger, and the value entered
by the user is stored in that address.
*/
