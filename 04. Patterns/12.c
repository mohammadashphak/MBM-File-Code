/* 
Print the following pattern.
* 
* * 
*   * 
*     *
*       *
*         *
* * * * * * *
&
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, rows;

    // clrscr(); // For Turbo C++
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == j || i == rows)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    // getch(); // For Turbo C++
}