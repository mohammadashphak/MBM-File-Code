// C Program to Display Armstrong Number Between Two Intervals.

#include <stdio.h>
#include <math.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, count, low, up, n, result, originalNum;

    // clrscr(); // For Turbo C++

    printf("Enter the lower endpoint: ");
    scanf("%d", &low);

    printf("Enter the upper endpoint: ");
    scanf("%d", &up);

    printf("Armstrong numbers between %d and %d are: ", low, up);

    for (n = low; n <= up; n++)
    {
        result = 0;
        originalNum = n;

        count = 0;

        while (n != 0)
        {
            n /= 10;
            count++;
        }

        n = originalNum;

        while (n != 0)
        {
            result = result + pow((n % 10), count);
            n /= 10;
        }

        if (result == originalNum)
        {
            printf("%d ", originalNum);
        }
        n = originalNum;
    }

    // getch(); // For Turbo C++
}