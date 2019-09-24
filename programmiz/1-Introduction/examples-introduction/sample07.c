// find the size of int, float, double, and char

#include<stdio.h>
int main(void)
{
  int input1;
  float input2;
  double input3;
  char input4;
  
  printf("Size of int %ld bytes\n", sizeof(input1));
  printf("Size of float %ld bytes\n", sizeof(input2));
  printf("Size of double %ld bytes\n", sizeof(input3));
  printf("Size of char %ld bytes\n", sizeof(input4));
  
  return 0;
}
