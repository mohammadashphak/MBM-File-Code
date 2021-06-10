// C Program to Check Armstrong Number Using User-defined Function.

#include <stdio.h>
#include <math.h>
// #include <conio.h> // For Turbo C++

void armstrong(int);

void main()
{
    int num;

    // clrscr(); // For Turbo C++
    printf("Enter a number: ");
    scanf("%d", &num);

    armstrong(num);

    // getch(); // For Turbo C++
}
void armstrong(int num)
{
    int i, originalNum, count, result;
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
}