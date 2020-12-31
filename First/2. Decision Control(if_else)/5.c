// C Program to Check Leap Year.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    // clrscr(); // For Turbo C++
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("The year you entered is a leap year.\n");
            }
            else
            {
                printf("The year you entered is not a leap year.\n");
            }
        }
        else
        {
            printf("The year you entered is a leap year.\n");
        }
    }
    else
    {
        printf("The year you entered is not a leap year.\n");
    }

    // getch(); // For Turbo C++
}