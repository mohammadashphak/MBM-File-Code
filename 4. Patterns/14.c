/* 
Print the following pattern.
* * * * * 
  * * * *
    * * * 
      * *
        *
        *
      * *
    * * *
  * * * *
* * * * * 
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
  int i, j, space, columns;

  // clrscr(); // For Turbo C++
  printf("Enter the number of columns: ");
  scanf("%d", &columns);

  for (i = columns; i >= 1; i--)
  {
    for (space = 1; space <= columns - i; space++)
    {
      printf("  ");
    }

    for (j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  for (i = 1; i <= columns; i++)
  {
    for (space = 1; space <= columns - i; space++)
    {
      printf("  ");
    }
    for (j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  // getch(); // For Turbo C++
}