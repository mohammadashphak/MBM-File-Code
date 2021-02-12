/* 
Print the following pattern.
1
23
456
78910
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int rows, i, j, number;

    // clrscr(); // For Turbo C++
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    number = 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}