// C Program to Display Characters from A to Z Using Loop.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i;
    char A, Z;

    // clrscr(); // For Turbo C++
    A = 'A';
    Z = 'Z';

    for (i = 0; i < 26; i++)
    {
        printf("%c\n", A + i);
    }
    // getch(); // For Turbo C++
}