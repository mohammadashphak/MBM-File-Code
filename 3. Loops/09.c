// C Program to Reverse a Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num;

    // clrscr(); // For Turbo C++
    printf("Enter the number\n");
    scanf("%d", &num);
    while (num)
    {
        printf("%d", num % 10);
        num = num / 10;
    }
    // getch(); // For Turbo C++
}