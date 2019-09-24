// c program to swap two numbers

#include<stdio.h>
int main(void)
{
  int input1;
  int input2;
  int temp;
  
  printf("Enter two integers: ");
  scanf("%d%d, &input1, &input2);
  
  temp = input1;
  input1 = input2;
  input2 = temp;
  
  printf("%d swap from input2\n", input1);
  printf("%d swap from input1\n", input2);
  
  return 0;
}
