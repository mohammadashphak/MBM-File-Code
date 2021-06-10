/* 
Print the following pattern.
A 
B B
C C C 
D D D D 
E E E E E
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j;
    char input, alphabet;

    // clrscr(); // For Turbo C++
    printf("Enter an uppercase character you want to print in the last row: ");
    scanf("%c", &input);

    alphabet = 'A';

    for (i = 1; i <= (input - 'A' + 1); i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", alphabet);
        }
        alphabet++;
        printf("\n");
    }

    // getch(); // For Turbo C++
}