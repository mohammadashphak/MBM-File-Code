// C Program to Display Prime Numbers Between Intervals Using Function.

#include <stdio.h>
// #include <conio.h> // For Turbo C++
#include <math.h>

void prime(int, int);

void main()
{
    int low, up;

    // clrscr(); // For Turbo C++

    printf("Enter lower endpoint: ");
    scanf("%d", &low);

    printf("Enter upper endpoint: ");
    scanf("%d", &up);

    prime(low, up);
    // getch(); // For Turbo C++
}

void prime(int low, int up)
{
    int i, n, flag;

    printf("Prime numbers between %d and %d are: ", low, up);

    for (n = low; n <= up; n++)
    {
        if (n > 1)
        {
            flag = 1;

            for (i = 2; i <= sqrt(n); ++i)
            {

                // condition for non-prime
                if (n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("%d ", n);
            }
        }
    }
}