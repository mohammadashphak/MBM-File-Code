// C program to calculate the power using recursion.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

long long powerFun(int, int);

void main()
{
    int base, power;
    long long result;

    // clrscr(); // For Turbo C++
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter a power digit: ");
    scanf("%d", &power);

    if (power >= 0)
    {
        result = powerFun(base, power);

        printf("The result is %d.", result);
    }
    else
    {
        result = powerFun(base, -power);

        printf("The result is 1/%d.", result);
    }

    // getch(); // For Turbo C++
}

long long powerFun(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    else
    {
        return base * powerFun(base, power - 1);
    }
}