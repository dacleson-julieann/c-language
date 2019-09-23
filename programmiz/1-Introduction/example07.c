// example 7: c character i/o

#include<stdio.h>
int main()
{
  char chr;
  printf("Enter a character: ");
  scanf("%c", &chr);
  printf("You entered %c.", chr);

  return 0;
}

/*
when a character is entered by the user in the above program, the character
itself is not stored. instead, an integer value (ASCII value) is stored.

and when we display that value using %c test format, the entered character
is displayed. if we used %d to display the character, it's ASCII value is
printed.
*/
