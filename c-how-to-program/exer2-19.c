/*Exer2-19 (Arithmetic, Largest Value and Smallest Value) Write a program
that inputs three different integers from the keyboard, then prints the sum,
the average, the product, the smallest and the largest of these numbers.
Use only the single-selection form of the if statement you learned in
this chapter. The screen dialogue should appear as follows:

  Input three different integers: 13 27 14
	Sum is 54
	Average is 18
	Product is 4914
	Smallest is 13
	Largest is 27 */

  // three different Integers
  // print sum, average, product, smallest and Largest
  // use single-selection if statements

  #include<stdio.h>

  int main(void)
  {
    int int1, int2, int3;

    printf("Enter three Integers: \n");
    scanf("%d%d%d", &int1, &int2, &int3);

    //sum = int1 + int2 + int3;
    //averageresult = sum / 3;

    printf("Sum is %d\n", int1 + int2 + int3);
    printf("Average is %d\n", (int1 + int2 + int3) / 3);
    printf("Product is %d\n", int1 * int2 * int3);

    if (int1 <= int2) {
      if (int1 <= int3) {
        printf("Smallest is %d\n", int1);
      }
      else
        printf("Smallest is %d\n", int3);
    }

    if (int2 <= int1) {
      if (int2 <= int3) {
        printf("Smallest is %d\n", int2);
      }
      else
        printf("Smallest is %d\n", int3);
    }

    if (int1 >= int2) {
      if (int1 >= int3) {
        printf("Largest is %d\n", int1);
      }
      else
        printf("Largest is %d\n", int3);
    }

    if (int2 >= int1) {
      if (int2 >= int3) {
        printf("Largest is %d\n", int2);
      }
      else
        printf("Largest is %d\n", int3);
    }

  }
