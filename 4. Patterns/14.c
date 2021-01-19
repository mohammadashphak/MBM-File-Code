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
    int i, j, k;

    // clrscr(); // For Turbo C++

    for (i = 1; i <= 10; i++)
    {
        if (i <= 5)
        {
            for (k = i - 1; k > 0; k--)
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
            for (k = 10 - i; k > 0; k--)
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