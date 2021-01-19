// C Program to Calculate the Sum of Natural Numbers.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, n, sum;

    // clrscr(); // For Turbo C++
    sum = 0;

    printf("Enter the number till which you want to get sum\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("The sum of first %d natural numbers is %d.\n", n, sum);

    // getch(); // For Turbo C++
}