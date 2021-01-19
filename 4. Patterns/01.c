/* 
Print the following pattern.
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
    int i, j;

    // clrscr(); // For Turbo C++

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}