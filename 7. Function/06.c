// C Program to Find G.C.D Using Recursion.

#include <stdio.h>
// #include <conio.h> // For Turbo C++
#include <math.h>

int GCD(int, int, int);

void main()
{
    int i, num1, num2, gcd;

    // clrscr(); // For Turbo C++
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    num1 = abs(num1);
    num2 = abs(num2);

    if (num1 > num2)
    {
        gcd = GCD(num1, num2, num2);
    }
    else
    {
        gcd = GCD(num1, num2, num1);
    }

    printf("The GCD of %d and %d = %d.", num1, num2, gcd);

    // getch(); // For Turbo C++
}
int GCD(int num1, int num2, int divider)
{
    if (num1 % divider == 0 && num2 % divider == 0)
    {
        return divider;
    }
    else
    {
        return GCD(num1, num2, divider - 1);
    }
}