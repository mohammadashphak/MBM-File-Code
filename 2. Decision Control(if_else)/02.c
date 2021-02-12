// C Program to Check Whether a Character is Vowel or Consonant.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    char c;

    // clrscr(); // For Turbo C++
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 (true) if c is a vowel
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is a vowel.", c);
    }
    else
    {
        printf("%c is a consonant.", c);
    }
    // getch(); // For Turbo C++
}