// C Program to convert marks of a students in Grade\n system.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int marks;

    // clrscr(); // For Turbo C++
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Enter a valid value of marks\n");
    }

    else if (marks > 90)
    {
        printf("A+ Grade\n");
    }
    else if (marks > 75)
    {
        printf("A Grade\n");
    }
    else if (marks > 60)
    {
        printf("B Grade\n");
    }
    else if (marks > 40)
    {
        printf("C Grade\n");
    }
    else
    {
        printf("D Grade\n");
    }

    // getch(); // For Turbo C++
}