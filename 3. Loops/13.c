// C Program to Display Prime Numbers Between Two Intervals.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, n, num1, num2, true_false;

    // clrscr(); // For Turbo C++

    printf("Enter the first number\n");
    scanf("%d", &num1);

    printf("Enter the second number\n");
    scanf("%d", &num2);

    printf("*****************************\n");

    for (n = num1 + 1; n < num2; n++)
    {
        if (n > 1)
        {
            true_false = 1;
            for (i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    true_false = 0;
                    break;
                }
                true_false = 1;
            }

            if (true_false == 1)
            {
                printf("%d\n", n);
            }
        }
    }

    // getch(); // For Turbo C++
}