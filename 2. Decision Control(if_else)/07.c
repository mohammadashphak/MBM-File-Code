// C Program to Check Whether a Character is an Alphabet or not.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    char c;

    // clrscr(); // For Turbo C++
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is an alphabet.", c);
    }
    else
    {
        printf("%c is not an alphabet.", c);
    }
    // getch(); // For Turbo C++
}