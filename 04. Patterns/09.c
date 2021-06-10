/* 
Print the following pattern.
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
    int rows, i, j, space;

    // clrscr(); // For Turbo C++
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--)
    {
        for (space = 0; space < rows - i; space++)
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