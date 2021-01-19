// C Program to Find ASCII Value of a Character.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    char a, b;

    // clrscr(); // For Turbo C++
    printf("Enter a character\n");
    scanf("%c", &a);
    b = a;

    printf("The ASCII value of '%c' is '%d'\n", a, b);
    // getch(); // For Turbo C++
}