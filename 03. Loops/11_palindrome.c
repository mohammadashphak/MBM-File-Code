// C Program to Check Whether a Number is Palindrome or Not.

#include <stdio.h>
#include <math.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int num, reversedNum, originalNum;

    // clrscr(); // For Turbo C++
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    reversedNum = 0;

    // reversed integer is stored in reversedNum
    while (num != 0)
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    // palindrome if orignalN and reversedNum are equal
    if (originalNum == reversedNum)
    {
        printf("%d is a palindrome.", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.", originalNum);
    }

    // getch(); // For Turbo C++
}