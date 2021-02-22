// C Program to Calculate the Power of a Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int base, power;
    long long result;

    // clrscr(); // For Turbo C++
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter a power digit: ");
    scanf("%d", &power);

    result = 1;

    if (power >= 0)
    {
        while (power != 0)
        {
            result *= base;
            power--;
        }

        printf("The result is %d.", result);
    }
    else
    {
        while (power != 0)
        {
            result *= base;
            power++;
        }

        printf("The result is 1/%d.", result);
    }

    // getch(); // For Turbo C++
}