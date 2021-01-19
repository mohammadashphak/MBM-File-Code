// C Program to Find Factorial of a Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, n, fctrl;

    // clrscr(); // For Turbo C++
    fctrl = 1;

    printf("Enter the number of which you want to get factorial\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fctrl = fctrl * i;
    }

    printf("The factorial of %d is %d.\n", n, fctrl);

    // getch(); // For Turbo C++
}