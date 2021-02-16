// C Program to Find Factorial of a Number Using Recursion.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

int factorial(int);

void main()
{
    int n;
    unsigned long long fact;
    // clrscr(); // For Turbo C++
    printf("Enter the number of which you want to get factorial: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        fact = factorial(n);
        printf("Factorial of %d = %llu.\n", n, fact);
    }
    // getch(); // For Turbo C++
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}