/* (Separating Digits in an Integer) Write a program that inputs one
five-digit number, separates the number into its individual digits
and prints the digits separated from one another by three spaces each.
[Hint: Use combinations of integer division and the remainder operation.]
For example, if the user types in 42139, the program should print */
// 4 2 1 3 9

/*
solution:
Given #: 42139
1. We get the first number then divide by the number(42139) between 10000;
2. We get the second number then divide by the number result(2139) between 1000;
3. We get the third number then divide by the number result(139) between 100;
4. We get the fourth number then divide by the number result(39) between 10;
5. We get the fifth number then divide by the number result(9);
*/

#include<stdio.h>

int main(void) {

  int number;

  int firstdigit;
  int seconddigit;
  int thirddigit;
  int fourthdigit;
  int fifthdigit;

  int firstremain;
  int secondremain;
  int thirdremain;
  int fourthremain;
  int fifthremain;

  // enter the number of five digit.
  printf("Enter the number of five digits: ");
  scanf("%d", &number);

  firstdigit = number / 10000;
  firstremain = number % 10000;

  seconddigit = firstremain / 1000;
  secondremain = firstremain % 1000;

  thirddigit = secondremain / 100;
  thirdremain = secondremain % 100;

  fourthdigit = thirdremain / 10;
  fourthremain = thirdremain % 10;

  fifthdigit = fourthremain;

  printf("%d    ", firstdigit);
  printf("%d    ", seconddigit);
  printf("%d    ", thirddigit);
  printf("%d    ", fourthdigit);
  printf("%d    ", fifthdigit);

  printf("\n\n");

  return 0;

}
