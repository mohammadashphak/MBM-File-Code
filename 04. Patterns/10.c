/* 
Print the following pattern.
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int rows, coef, space, i, j;

    // clrscr(); // For Turbo C++
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    coef = 1;
    for (i = 0; i < rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
            {
                coef = 1;
            }
            else
            {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4d", coef);
        }
        printf("\n");
    }
    // getch(); // For Turbo C++
}