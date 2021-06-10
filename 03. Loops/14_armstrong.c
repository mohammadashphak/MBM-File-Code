// C Program to Check Armstrong Number.

#include <stdio.h>
#include <math.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num, originalNum, count, result;

    // clrscr(); // For Turbo C++

    printf("Enter a number: ");
    scanf("%d", &num);

    result = 0;
    originalNum = num;

    count = 0;

    while (num != 0)
    {
        num /= 10;
        count++;
    }

    num = originalNum;

    while (num != 0)
    {
        result = result + pow((num % 10), count);
        num /= 10;
    }

    if (result == originalNum)
    {
        printf("%d is an Armstrong number.", originalNum);
    }

    else
    {
        printf("%d is not an Armstrong number.", originalNum);
    }

    // getch(); // For Turbo C++
}