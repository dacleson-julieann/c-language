/* Exer2-20 (Diameter, Circumference and Area of a Circle) Write a program
that reads in the radius of a circle and prints the circle’s diameter,
circumference and area. Use the constant value 3.14159 for the π.
Perform each of these calculations inside the printf statement(s)
and use the conversion specifier %f. [Note: In this chapter, we have
discussed only integer constants and variables. In Chapter 3 we’ll
discuss floating-point numbers, i.e. values that can have decimal points.] */

// radius of Circle
// prints diameter, circumference and Area
// constant value 3.14159 for π

// diameter =  pie / circumference;
// circumference = 2 * pie * radius;
// area = pie * (radius * radius);

#include<stdio.h>

int main(void)
{
  float rad;
  float dia;
  float circu;
  float ar;
  float pie;

  pie = 3.14159;

  printf("Enter the radius of Circle: \n");
  scanf("%f", &rad);

  circu = 2 * pie * rad;
  dia = pie / circu;
  ar = pie * (rad * rad);

  printf("Diamter of Circle is %.2f\n", dia);
  printf("Circumference of Circle is %.2f\n", circu);
  printf("Area of Circle is %.2f\n", ar);

  return 0;
}
