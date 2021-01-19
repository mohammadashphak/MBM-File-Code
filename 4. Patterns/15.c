/* 
Print the following pattern.
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, k;

    // clrscr(); // For Turbo C++

    for (i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (k = 5 - i; k > 0; k--)
            {
                printf(" ");
            }
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (k = i - 5; k > 0; k--)
            {
                printf(" ");
            }
            for (j = 2 * (10 - i) - 1; j >= 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    // getch(); // For Turbo C++
}