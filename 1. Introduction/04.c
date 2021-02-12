// C Program to Find ASCII Value of a Character.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    char c;

    // clrscr(); // For Turbo C++
    printf("Enter a character: ");
    scanf("%c", &c);

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);

    // getch(); // For Turbo C++
}