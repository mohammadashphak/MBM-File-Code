// C Program to Check Whether a Number is Even or Odd.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    // clrscr(); // For Turbo C++
    int num;
    printf("Enter the integer\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number you entered is even.\n");
    }
    else
    {
        printf("The number you entered is odd.\n");
    }

    // getch(); // For Turbo C++
}