/* 
Print the following pattern.
    1
   232
  34543
 4567654
567898765
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
            if (j <= i)
            {
                printf("%d", i + j - 1);
            }
            else
            {
                printf("%d", 3 * i - j - 1);
            }
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}