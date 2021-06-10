// C Program to Swap Two Numbers using temporary variable.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int num1, num2, temp;

    // clrscr(); // For Turbo C++
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Value of num1 is assigned to temp
    temp = num1;

    // Value of num2 is assigned to num1
    num1 = num2;

    // Value of temp (initial value of num1) is assigned to num2
    num2 = temp;

    printf("\nAfter swapping...\nfirst number = %d,\nsecond number = %d", num1, num2);
    // getch(); // For Turbo C++
}