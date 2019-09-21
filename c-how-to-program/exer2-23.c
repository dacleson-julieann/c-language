/* Exer2-23 (Largest and Smallest Integers) Write a program that reads
in five integers and then determines and prints the largest and the
smallest integers in the group. Use only the programming techniques
you have learned in this chapter. */

// reads five integers
// prints to largest number to smallest number

#include<stdio.h>

int main(void)
{
  int firstint, secondint, thirdint, fourthint, fifthint;

  printf("Enter five different integers: \n");

  printf("First Integer:\n");
  scanf("%d", &firstint);

  printf("Second Integer:\n");
  scanf("%d", &secondint);

  printf("Third Integer:\n");
  scanf("%d", &thirdint);

  printf("Fourth Integer:\n");
  scanf("%d", &fourthint);

  printf("Fifth Integer:\n");
  scanf("%d", &fifthint);

  if (firstint > secondint) {
    if (firstint > thirdint) {
      if (firstint > fourthint) {
        if (firstint > fifthint) {
          printf("First Number is the Largest %d.\n", firstint);
        }
      }
    }
  }
  if (secondint > firstint) {
    if (secondint > thirdint) {
      if (secondint > fourthint) {
        if (secondint > fifthint) {
          printf("Second Number is the Largest %d.\n", secondint);
        }
      }
    }
  }
  if (thirdint > firstint) {
    if (thirdint > secondint) {
      if (thirdint > fourthint) {
        if (thirdint > fifthint) {
          printf("Third Number is the Largest %d.\n", thirdint);
        }
      }
    }
  }
  if (fourthint > firstint) {
    if (fourthint > secondint) {
      if (fourthint > thirdint) {
        if (fourthint > fifthint) {
          printf("Fourth Number is the Largest %d.\n", fourthint);
        }
      }
    }
  }
  if (fifthint > firstint) {
    if (fifthint > secondint) {
      if (fifthint > thirdint) {
        if (fifthint > fourthint) {
          printf("Fifth Number is the Largest %d.\n", fifthint);
        }
      }
    }
  }


  if (firstint < secondint) {
    if (firstint < thirdint) {
      if (firstint < fourthint) {
        if (firstint < fifthint) {
          printf("First Number is the smallest %d.\n", firstint);
        }
      }
    }
  }
  if (secondint < firstint) {
    if (secondint < thirdint) {
      if (secondint < fourthint) {
        if (secondint < fifthint) {
          printf("Second Number is the smallest %d.\n", secondint);
        }
      }
    }
  }
  if (thirdint < firstint) {
    if (thirdint < secondint) {
      if (thirdint < fourthint) {
        if (thirdint < fifthint) {
          printf("Third Number is the smallest %d.\n", thirdint);
        }
      }
    }
  }
  if (fourthint < firstint) {
    if (fourthint < secondint) {
      if (fourthint < thirdint) {
        if (fourthint < fifthint) {
          printf("Fourth Number is the smallest %d.\n", fourthint);
        }
      }
    }
  }
  if (fifthint < firstint) {
    if (fifthint < secondint) {
      if (fifthint < thirdint) {
        if (fifthint < fourthint) {
          printf("Fifth Number is the smallest %d.\n", fifthint);
        }
      }
    }
  }

  return 0;

}
