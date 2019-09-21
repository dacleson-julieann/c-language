/* Exer2-18 (Compairing Integers) Write a program that asks the user to enter
two integers, obtains the numbers from the user, then prints the
larger number followed by the words “is larger.” If the numbers are equal,
print the message “These numbers are equal.” Use only the single-selection
form of the if statement you learned in this chapter. */

// two integers by input user
// prints largest number
// prints equal number
// use single-selection form (if statement)

#include<stdio.h>

int main(void)
{
  int int1, int2;

  printf("Enter first number:\n");
  scanf("%d", &int1);

  printf("Enter second number:\n");
  scanf("%d", &int2);

  if (int1 < int2) {
    printf("%d is larger.\n", int2);
  }

  if (int1 > int2) {
    printf("%d is larger.\n", int1);
  }

  if (int1 == int2) {
    printf("These number are equal!\n");
  }
}
