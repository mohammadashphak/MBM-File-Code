// C Program to Calculate the Power of a Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num, power, result;

    // clrscr(); // For Turbo C++
    printf("Enter the number\n");
    scanf("%d", &num);

    printf("Enter the power digit\n");
    scanf("%d", &power);

    result = 1;

    for (i = 1; i <= power; i++)
    {
        result = result * num;
    }

    printf("The result is %d.", result);

    // getch(); // For Turbo C++
}