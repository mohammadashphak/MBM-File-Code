// C Program to Check Armstrong Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num, sum, single;

    // clrscr(); // For Turbo C++

    printf("Enter the number\n");
    scanf("%d", &num);

    sum = 0;
    single = num;

    for (i = 1; single; i++)
    {
        sum = sum + (single % 10) * (single % 10) * (single % 10);
        single /= 10;
    }

    if (sum == num)
    {
        printf("Armstrong.\n");
    }

    else
    {
        printf("Not a armstrong.\n");
    }

    // getch(); // For Turbo C++
}