/* 
Print the following pattern.
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, space, rows;

    // clrscr(); // For Turbo C++
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
            {
                printf("%d ", i + j - 1);
            }
            else
            {
                printf("%d ", 3 * i - j - 1);
            }
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}