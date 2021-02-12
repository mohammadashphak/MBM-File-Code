// C Program to Reverse a Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int n, rev;

    // clrscr(); // For Turbo C++
    printf("Enter an integer: ");
    scanf("%d", &n);

    rev = 0;

    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    // getch(); // For Turbo C++
}