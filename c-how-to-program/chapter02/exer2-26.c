/* write a program that reads in two integers and determins and prints if the first is a multiple of the seconds.
[hint: use the remainder operator.] */

#include<stdio.h>

int main() {

	int num1;
	int num2;

	printf("Enter two integers: ");
	scanf("%d%d", &num1, &num2);

	if (num1 > num2) {
		if ((num1 & num2) == 0) {
			printf("%d is multiple of %d.\n", num1, num2);
		}

		if ((num1 & num2) != 0) {
			printf("%d is not multiple of %d.\n", num1, num2);
		}
	}

	if (num1 < num2) {
		printf("%d is not multiple of %d.\n", num1, num2);
	}

	return 0;

}
