#include <stdio.h>

int main(void) {
  int weightkilos;
  int heightmeters;
  int BMIresult;

  printf("Input the weight in kilograms: ");
  scanf("%d", &weightkilos);

  printf("Input the height in meters: ");
  scanf("%d", &heightmeters);

  BMIresult = weightkilos/(heightmeters*heightmeters);

  printf("The body mass index calculator (BMI) is%d\n", BMIresult);

  printf("BMI VALUES\n");
  printf("Underweight: less than 18.5
  printf("Normal:      between 18.5 and 24.9
  printf("Overweight:  between 25 and 29.9
  printf("Obese:       30 or greater

}
