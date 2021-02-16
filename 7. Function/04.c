// C Program to Find the Sum of Natural Numbers using Recursion.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

int naturalSum(int);

void main()
{
    int n, sum;
    // clrscr(); // For Turbo C++
    printf("Enter the number till which you want to get sum: ");
    scanf("%d", &n);

    sum = naturalSum(n);

    printf("The sum of first %d natural numbers is %d.\n", n, sum);
    // getch(); // For Turbo C++
}

int naturalSum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + naturalSum(n - 1);
    }
}