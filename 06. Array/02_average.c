// C Program to Calculate Average Using Arrays.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int n, i;
    float sum, avg;
    // clrscr(); // For Turbo C++
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float nums[n];
    sum = 0;

    if (n < 1)
    {
        printf("Error! number should be greater than 0.");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter number %d: ", i + 1);
            scanf("%f", &nums[i]);

            sum += nums[i];
        }

        avg = sum / n;
        printf("Average = %.2f", avg);
    }
    // getch(); // For Turbo C++
}