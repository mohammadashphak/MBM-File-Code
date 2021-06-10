// C Program to Display Prime Numbers Between Two Intervals.

#include <stdio.h>
#include <math.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, n, low, up, flag;

    // clrscr(); // For Turbo C++

    printf("Enter lower endpoint: ");
    scanf("%d", &low);

    printf("Enter upper endpoint: ");
    scanf("%d", &up);

    printf("Prime numbers between %d and %d are: ", low, up);

    for (n = low; n <= up; n++)
    {
        if (n > 1)
        {
            flag = 1;

            for (i = 2; i <= sqrt(n); i++)
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

    // getch(); // For Turbo C++
}