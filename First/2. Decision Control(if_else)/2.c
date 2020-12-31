// C Program to Check Whether a Character is Vowel or Consonant.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    // clrscr(); // For Turbo C++
    char chrctr;
    printf("Enter the character\n");
    scanf("%c", &chrctr);

    if (chrctr == 'a' || chrctr == 'e' || chrctr == 'i' || chrctr == 'o' || chrctr == 'u' || chrctr == 'A' || chrctr == 'E' || chrctr == 'I' || chrctr == 'O' || chrctr == 'U')
    {
        printf("The character you entered is vowel.\n");
    }
    else
    {
        printf("The character you entered is consonant.\n");
    }

    // getch(); // For Turbo C++
}