// C Program to Check Whether a Number is Positive or Negative.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    // clrscr(); // For Turbo C++
    int num;

    printf("Enter the number\n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The number you entered is positive\n");
    }
    else if (num == 0)
    {
        printf("The number you entered is zero\n");
    }
    else
    {
        printf("The number you entered is negative\n");
    }

    // getch(); // For Turbo C++
}