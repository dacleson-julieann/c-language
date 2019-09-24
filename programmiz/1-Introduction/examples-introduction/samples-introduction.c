#include<stdio.h>
int main(void)
{
  // c program to print a sentence
  printf("Hello World!\n\n");

  // c program to print a integer by the user
  int input1;
  printf("Enter an integer: \n");
  scanf("%d", &input1);
  printf("The number you entered is %d\n\n", input1);

  // c program to add two integers entered by the user
  int input2, input3;
  printf("Enter the first number:\n");
  scanf("%d", &input2);
  printf("Enter the second number:\n");
  scanf("%d", &input3);

  printf("The sum of %d and %d is %d\n", input2, input3, input2 + input3);
  printf("The subtract of %d and %d is %d\n", input2, input3, input2 - input3);
  printf("The multiply of %d and %d is %d\n", input2, input3, input2 * input3);
  printf("%d divide by %d is %d and the remainder is %d\n\n", input2, input3, input2 / input3, input2 % input3);

  int temp;
  printf("Swapping two numbers!\n");
  temp = input2;
  input2 = input3;
  input3 = temp;
  printf("%d\t", input2);
  printf("%d\n", input3);

  return 0;
}
