// c program to multiply two floating-point numbers

#include<stdio.h>
int main(void)
{
  float input1;
  double input2;
  
  printf("Enter 1st integer: \n");
  scanf("%f", &input1);
  printf("Enter 2nd integer: \n");
  scanf("%lf", &input2);
  
  printf("%f multiply by %lf is equal to %lf", input1, input2, input1 * input2);
  
  return 0;
}
