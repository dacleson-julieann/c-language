// Using if statenets relational operators and equality

#include<stdio.h>

int main(void)
{
  int num1;
  int num2;

  printf("Enter the first integer and I will tell you \n");
  printf("the relationship they satisfy!\n");

  scanf("%d%d", &num1, &num2);

  if (num1 == num2) {
    printf("%d is equal to %d", num1, num2);
  }

  if (num1 >= num2) {
    printf("%d is greater than or equal to %d", num1, num2);
  }

  if (num1 <= num2) {
    printf("%d is less than or equal to %d", num1, num2);
  }

  if (num1 != num2) {
    printf("%d is not equal to %d", num1, num2);
  }

  return 0;
}
