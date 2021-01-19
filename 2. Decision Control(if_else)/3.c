// C Program to Find the Largest Number Among Three Numbers.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int a, b, c;

    // clrscr(); // For Turbo C++
    printf("Enter the value of first integer\n");
    scanf("%d", &a);

    printf("Enter the value of second integer\n");
    scanf("%d", &b);

    printf("Enter the value of third integer\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("The largest integer among three you entered is %d\n", a);
    }
    else if (b > c)
    {
        printf("The largest integer among three you entered is %d\n", b);
    }
    else
    {
        printf("The largest integer among three you entered is %d\n", c);
    }

    // getch(); // For Turbo C++
}