// C Program to Check Whether a Number is Even or Odd.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int num;

    // clrscr(); // For Turbo C++
    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if (num % 2 == 0)
    {
        printf("%d is an even number.", num);
    }
    else
    {
        printf("%d is an odd number.", num);
    }
    // getch(); // For Turbo C++
}