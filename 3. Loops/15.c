// C Program to Display Armstrong Number Between Two Intervals.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num1, num2, num, sum, single;

    // clrscr(); // For Turbo C++

    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%d", &num2);

    printf("********************\n");
    for (num = num1; num <= num2; num++)
    {
        sum = 0;
        single = num;

        for (i = 1; single; i++)
        {
            sum = sum + (single % 10) * (single % 10) * (single % 10);
            single /= 10;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    // getch(); // For Turbo C++
}