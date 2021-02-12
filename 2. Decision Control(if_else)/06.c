// C Program to Check Whether a Number is Positive or Negative.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int num;

    // clrscr(); // For Turbo C++
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is a positive number.", num);
    }
    else if (num == 0)
    {
        printf("0 is neither positive nor negative.");
    }
    else
    {
        printf("%d is a negative number.", num);
    }

    // getch(); // For Turbo C++
}