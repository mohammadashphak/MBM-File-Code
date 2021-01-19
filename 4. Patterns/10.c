/* 
Print the following pattern.
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, k;

    // clrscr(); // For Turbo C++

    for (i = 1; i <= 5; i++)
    {
        for (k = 5 - i; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}