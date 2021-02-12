/* 
Print the following pattern.
*****
 ****    
  ***
   **
    *
    *
   **
  ***
 ****
*****
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, space, columns;

    // clrscr(); // For Turbo C++
    printf("Enter the number of rows: ");
    scanf("%d", &columns);

    for (i = 1; i <= columns; i++)
    {
        if (i <= 5)
        {
            for (space = i - 1; space > 0; space--)
            {
                printf(" ");
            }
            for (j = 6 - i; j >= 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (space = 10 - i; space > 0; space--)
            {
                printf(" ");
            }
            for (j = 1; j <= i - 5; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    // getch(); // For Turbo C++
}