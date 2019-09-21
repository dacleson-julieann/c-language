/* Exer2-16 (Arithmetic) Write a program that asks the user to enter two
numbers, obtains them from the user and prints their sum, product,
difference, quotient and remainder. */

// ask for two numbers input by the user
// prints their sum, product, difference, quotient and remainder

/* sum = int1 + int2 : subtract = int1 - int2 : multiply = int1 * int2 :
divi = int1 / int2 : remaind = int1 % int2 */

#include<stdio.h>

int main(void)
{
  int int1, int2;
  int sum, subtract, multiply, divi, remaind;

  printf("Enter first interger: \n");
  scanf("%d", &int1);

  printf("Enter second integer: \n");
  scanf("%d", &int2);

  printf("Addition of %d and %d is %d\n", int1, int2, int1 + int2);
  printf("Difference of %d and %d is %d\n", int1, int2, int1 - int2);
  printf("Multiplication of %d and %d is %d\n", int1, int2, int1 * int2);
  printf("Division of %d and %d is %d\n", int1, int2, int1 / int2);
  printf("Remainder of %d and %d is %d\n", int1, int2, int1 % int2);

  return 0;
}
