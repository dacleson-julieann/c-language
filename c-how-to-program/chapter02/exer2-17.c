/* Exer2-17 (Printing Values with printf) Write a program that prints
the number 1 to 4 on the same line. Write the program using the following
methods.
	a.) using one printf statement with no conversion specifiers.
	b.) using one printf statement with four conversion specifiers.
	c.) using four printf statements. */

// program that prints from 1 to 4 in the same line.
// a.) printf(using one printf with \n \n \n \n)
// b.) printf(with conversion specifiers)
// c.) using 4 printf

#include<stdio.h>

int main(void)
{
  printf("a.) using one printf statement with no conversion specifiers)\n");
  printf("1\n2\n3\n4\n");

  printf("\nb.) using one printf statement with four conversion specifiers\n");
  printf("\n");

  printf("\nc.) using four printf statement\n");
  printf("1\n");
  printf("2\n");
  printf("3\n");
  printf("4\n");

  return 0;
}
