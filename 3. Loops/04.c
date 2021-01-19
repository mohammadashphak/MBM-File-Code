// C Program to Display Fibonacci Sequence.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num, first, second, third;

    // clrscr(); // For Turbo C++
    first = 0;
    second = 1;

    printf("Enter the number\n");
    scanf("%d", &num);

    if (num < 1)
    {
        printf("Enter a valid number\n");
    }
    else if (num == 1)
    {
        printf("0");
    }
    else
    {
        printf("0");
        printf(",1");
        for (i = 3; i <= num; i++)
        {
            third = first + second;
            printf(",%d", third);

            first = second;
            second = third;
        }
    }
    // getch(); // For Turbo C++
}