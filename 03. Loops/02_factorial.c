// C Program to Find Factorial of a Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, n;
    unsigned long long fact;

    // clrscr(); // For Turbo C++
    fact = 1;

    printf("Enter the number of which you want to get factorial: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d = %llu.", n, fact);
    }

    // getch(); // For Turbo C++
}