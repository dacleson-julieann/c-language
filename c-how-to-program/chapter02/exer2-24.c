/* Exer2-24 (Odd or Even) Write a program that reads an integer and determines
and prints whether it is odd or even. [Hint: Use the remainder operator.
An even number is a multiple of two. Any multiple of two leaves a remainder
of zero when divided by 2.] */

#include<stdio.h>

int main(void){
  int number;

  printf("Input the number: ");
  scanf("%d", &number);

  if ((number % 2) == 0) {
    printf("%d is even.\n", number);
  }

  if ((number % 2) != 0) {
    printf("%d is odd.\n", number);
  }

  return 0;
}
