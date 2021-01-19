/* 
Print the following pattern.
*********
 *     *
  *   *
   * *
    *
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, k;

    // clrscr(); // For Turbo C++

    for (i = 5; i >= 1; i--)
    {
        for (k = 5 - i; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i < 5)
            {
                if (j == 1 || j == 2 * i - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if (i == 5)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}