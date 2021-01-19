/* 
Print the following pattern.
*
**
* *
*  *
*   *
*    *
******* 
&
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j;

    // clrscr(); // For Turbo C++

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i < 7)
            {
                if (j == 1 || j == i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if (i == 7)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}