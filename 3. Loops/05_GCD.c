// C Program to Find GCD or HCF of two Numbers.

#include <stdio.h>
#include <math.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num1, num2;

    // clrscr(); // For Turbo C++
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    num1 = abs(num1);
    num2 = abs(num2);

    if (num1 > num2)
    {
        for (i = num2; i > 0; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                printf("GCD of %d and %d = %d.", num1, num2, i);
                break;
            }
        }
    }
    else
    {
        for (i = num1; i > 0; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                printf("GCD of %d and %d = %d.", num1, num2, i);
                break;
            }
        }
    }

    // getch(); // For Turbo C++
}