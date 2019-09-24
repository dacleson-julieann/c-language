// c program to find the ASCII value of a character entered by the user

#include<stdio.h>
int main(void)
{
  char input1;
  
  printf("Enter a character: \n");
  scanf("%c", &input1);
  
  printf("You entered %c and the ASCII value is %d", input1, input1);
  
  return 0;
}
