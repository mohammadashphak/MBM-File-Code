// C Program to Find ASCII Value of a Character.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    // clrscr(); // For Turbo C++
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);
    int b = a;

    printf("The ASCII value of '%c' is '%d'\n", a, b);
    // getch(); // For Turbo C++
}