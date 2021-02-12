// C Program to Check Whether a Number is Prime or Not.

#include <stdio.h>
#include <math.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int num, i, flag;

    // clrscr(); // For Turbo C++
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num > 1)
    {
        flag = 1;

        for (i = 2; i <= sqrt(num); ++i)
        {

            // condition for non-prime
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d is not a prime number.", num);
        }
        else
        {
            printf("%d is a prime number.", num);
        }
    }
    else if (num == 1)
    {
        printf("1 is neither prime nor composite.");
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    // getch(); // For Turbo C++
}