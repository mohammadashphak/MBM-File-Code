/* 
Print the following pattern.
        *
      * * *
    * * * * * 
  * * * * * * * 
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
  int i, j, space, rows;

  // clrscr(); // For Turbo C++
  printf("Enter the number of rows for upper triangle: ");
  scanf("%d", &rows);

  for (i = 1; i <= rows; i++)
  {
    for (space = 1; space <= rows - i; space++)
    {
      printf("  ");
    }
    for (j = 1; j <= 2 * i - 1; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  for (i = rows - 1; i > 0; i--)
  {
    for (space = 1; space <= rows - i; space++)
    {
      printf("  ");
    }
    for (j = 1; j <= 2 * i - 1; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  // getch(); // For Turbo C++
}