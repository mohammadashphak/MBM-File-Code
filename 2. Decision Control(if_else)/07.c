// C Program to Check Whether a Character is an Alphabet or not.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    char alpbt, a, z, A, Z;
    int ascii_alpbt, ascii_a, ascii_z, ascii_A, ascii_Z;

    // clrscr(); // For Turbo C++
    printf("Enter the character\n");
    scanf("%c", &alpbt);

    a = 'a';
    z = 'z';
    A = 'A';
    Z = 'Z';

    ascii_alpbt = alpbt;
    ascii_a = a;
    ascii_z = z;
    ascii_A = A;
    ascii_Z = Z;

    if (ascii_alpbt >= ascii_a && ascii_alpbt <= ascii_z || ascii_alpbt >= ascii_A && ascii_alpbt <= ascii_Z)
    {
        printf("The character you entered is an alphabet.\n");
    }
    else
    {
        printf("The character you entered is not an alphabet.\n");
    }

    // getch(); // For Turbo C++
}