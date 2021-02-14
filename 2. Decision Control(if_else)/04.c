// C Program to Find all Roots of a Quadratic Equation.

#include <stdio.h>
// #include <conio.h> // For Turbo C++
#include <math.h>

void main()
{
    int a, b, c, discriminant;

    // clrscr(); // For Turbo C++
    printf("Enter the coefficient of x square\n");
    scanf("%d", &a);

    printf("Enter the coefficient of x\n");
    scanf("%d", &b);

    printf("Enter the numerical value\n");
    scanf("%d", &c);

    discriminant = b * b - 4 * a * c;
    if (a != 0)
    {
        if (discriminant > 0)
        {
            printf("Roots are real and different.\n");
            printf("Root1 = %0.2f\n", (-b + sqrt(discriminant)) / (2.0 * a));
            printf("Root2 = %0.2f", (-b - sqrt(discriminant)) / (2.0 * a));
        }
        else if (discriminant == 0)
        {
            printf("Roots are real and same.\n");
            printf("Root1 = Root2 = %0.2f", -b / (2.0 * a));
        }

        else
        {
            printf("Roots are complex and different.\n");
            printf("Root1 = %0.2f + i(%0.2f)\n", -b / (2.0 * a), sqrt(-discriminant) / (2.0 * a));
            printf("Root2 = %0.2f - i(%0.2f)", -b / (2.0 * a), sqrt(-discriminant) / (2.0 * a));
        }
    }
    else
    {
        printf("Its not a quadratic equation.");
    }

    // getch(); // For Turbo C++
}