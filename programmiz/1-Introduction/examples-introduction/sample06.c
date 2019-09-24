// c program to find quotient and remainder of two numbers

#include<stdio.h>
int main()
{
  float input1, input2;
  
  printf("Enter 1st number: \n");
  scanf("%f", &input1);
  printf("Enter 2nd number: \n");
  scanf("%f", &input2);
  
  printf("%f divide by %f is %f and the remainder is %f", input1, input2, input1 / input2, input1 % input2);
  
  return 0;
}
