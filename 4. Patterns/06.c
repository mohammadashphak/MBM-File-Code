/* 
Print the following pattern.
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, rows;

    // clrscr(); // For Turbo C++

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}