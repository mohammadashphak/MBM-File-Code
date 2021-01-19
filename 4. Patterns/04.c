/* 
Print the following pattern.
A
BB
CCC
DDDD
EEEEE
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
            switch (i)
            {
            case 1:
                printf("A");
                break;
            case 2:
                printf("B");
                break;
            case 3:
                printf("C");
                break;
            case 4:
                printf("D");
                break;
            case 5:
                printf("E");
                break;

            default:
                break;
            }
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}