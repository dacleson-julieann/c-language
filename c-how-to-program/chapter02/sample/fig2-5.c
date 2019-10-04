// Another Simple C Program: Adding Two Integers

#include<stdio.h>

// function main begins program execution
int main (void)
{
  int integer1; // variable for first number input by user
  int integer2; // variable for second number input by user
  int sum; // total of two integer input by the user

  printf("Enter first number:\n"); // prompt the first number
  scanf("%d", &integer1); // saved it to integer1

  printf("Enter second number:\n");
  scanf("%d", &integer2);

  sum = integer1 + integer2; // assigned value to sum

  printf("Sum of %d and %d is equal to %d\n", integer1, integer2, sum);

  return 0; // indicate the program end successfully
} // end function main
