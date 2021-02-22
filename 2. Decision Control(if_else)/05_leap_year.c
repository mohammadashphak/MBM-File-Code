// C Program to Check Leap Year.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int year;

    // clrscr(); // For Turbo C++
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("%d is a leap year.", year);
        }
        else
        {
            printf("%d is not a leap year.", year);
        }
    }
    else if (year % 4 == 0)
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }

    // getch(); // For Turbo C++
}