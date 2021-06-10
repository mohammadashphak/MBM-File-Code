// C Program to convert marks of a student in Grade system.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int marks;

    // clrscr(); // For Turbo C++
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100)
    {
        printf("Enter a valid value of marks.");
    }

    else if (marks > 90)
    {
        printf("A+ Grade.");
    }
    else if (marks > 75)
    {
        printf("A Grade.");
    }
    else if (marks > 60)
    {
        printf("B Grade.");
    }
    else if (marks > 40)
    {
        printf("C Grade.");
    }
    else
    {
        printf("D Grade.");
    }

    // getch(); // For Turbo C++
}