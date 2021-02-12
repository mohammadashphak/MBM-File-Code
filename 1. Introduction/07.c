// C Program to Swap Two Numbers without using temporary variable.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int num1, num2;

    // clrscr(); // For Turbo C++
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Swapping
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping...\nfirst number = %d,\nsecond number = %d", num1, num2);
    // getch(); // For Turbo C++
}