// C Program to Count Number of Digits in an Integer.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num, sum;

    // clrscr(); // For Turbo C++

    printf("Enter the numbeer\n");
    scanf("%d", &num);

    sum = 0;
    while (num)
    {
        sum += 1;
        num = num / 10;
    }

    printf("%d", sum);

    // getch(); // For Turbo C++
}