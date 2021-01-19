// C Program to Check Whether a Number is Prime or Not.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num, true_false;

    // clrscr(); // For Turbo C++

    printf("Enter the number\n");
    scanf("%d", &num);

    if (num > 1)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                true_false = 1;
            }
        }

        if (true_false == 1)
        {
            printf("%d is not a prime number\n", num);
        }
        else
        {
            printf("%d is a prime number\n", num);
        }
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    // getch(); // For Turbo C++
}