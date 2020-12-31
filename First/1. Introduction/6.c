// C Program to Swap Two Numbers using temporary variable.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    // clrscr(); // For Turbo C++
    int a, b, temp;

    printf("Enter the value of first integer\n");
    scanf("%d", &a);

    printf("Enter the value of second integer\n");
    scanf("%d", &b);

    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("Now, the value of first integer is %d and the value of second integer is %d\n", a, b);
    // getch(); // For Turbo C++
}