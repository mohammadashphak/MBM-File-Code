// C Program to Find all Roots of a Quadratic Equation.

#include <stdio.h>
// #include <conio.h> // For Turbo C++
#include <math.h>

void main()
{
    // clrscr(); // For Turbo C++
    int a, b, c, d;

    printf("Enter the coefficient of x square\n");
    scanf("%d", &a);

    printf("Enter the coefficient of x\n");
    scanf("%d", &b);

    printf("Enter the numerical value\n");
    scanf("%d", &c);

    d = (b * b - 4 * a * c);
    if (a != 0)
    {
        if (d > 0)
        {
            printf("Roots of quadratic equation are %0.2f and %0.2f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
        }
        else if (d == 0)
        {
            printf("Roots of quadratic equation are equal and are %0.2f\n", (-b + sqrt(d)) / (2 * a));
        }

        else
        {
            printf("Roots of quadratic equation are (-%d+i(%0.2f))/%d and (-%d-i(%0.2f))/%d\n", b, sqrt(-d), 2 * a, b, sqrt(-d), 2 * a);
        }
    }
    else
    {
        printf("its not a quadratic equation\n");
    }

    // getch(); // For Turbo C++
}