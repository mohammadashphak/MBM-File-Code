/* 
Print the following pattern.
12345
1234
123
12
1
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j;

    // clrscr(); // For Turbo C++

    for (i = 5; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}