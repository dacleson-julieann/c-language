// program to relate two integers using =, >, or < symbol

#include<stdio.h>
int main()
{
  int number1, number2;
  printf("Enter two integers: ");
  scanf("%d %d", &number1, number2);

  if(number1 >= number2)
  {
    if (number1 == number2)
    {
      printf("Result: %d = %d", number1, number2);
    }
    else
    {
      printf("Result: %d > %d", number1, number2);
    }
  }
  else
  {
    printf("Result: %d < %d", number1, number2);
  }

  return 0;
}
/*
nested if...else

it is possible to include an if...esle statement inside the body
of another if...else statement.
*/
