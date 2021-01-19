// C Program to Swap Two Numbers without using temporary variable.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int a, b, temp;

    // clrscr(); // For Turbo C++
    printf("Enter the value of first integer\n");
    scanf("%d", &a);

    printf("Enter the value of second integer\n");
    scanf("%d", &b);

    // Swap without using temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Now, the value of first integer is %d and the value of second integer is %d\n", a, b);
    // getch(); // For Turbo C++
}