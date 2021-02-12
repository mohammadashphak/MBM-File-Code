// C Program to Find LCM of two Numbers.

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
        for (i = num1; i <= num1 * num2; i += num1)
        {
            if (i % num1 == 0 && i % num2 == 0)
            {
                printf("The LCM of %d and %d is %d.\n", num1, num2, i);
                break;
            }
        }
    }
    else
    {
        for (i = num2; i <= num1 * num2; i += num2)
        {
            if (i % num1 == 0 && i % num2 == 0)
            {
                printf("The LCM of %d and %d is %d.\n", num1, num2, i);
                break;
            }
        }
    }

    // getch(); // For Turbo C++
}