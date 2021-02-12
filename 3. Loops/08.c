// C Program to Count Number of Digits in an Integer.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    long long num;
    int count;

    // clrscr(); // For Turbo C++
    printf("Enter an integer: ");
    scanf("%lld", &num);

    count = 0;

    // iterate until n becomes 0
    // remove last digit from n in each iteration
    // increase count by 1 in each iteration
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    printf("Number of digits: %d", count);

    // getch(); // For Turbo C++
}