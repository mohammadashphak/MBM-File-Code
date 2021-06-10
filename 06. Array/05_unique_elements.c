// Write a program in C to print all unique elements in an array.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, n, freq;
    // clrscr(); // For Turbo C++
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    if (n < 1)
    {
        printf("Error! number should be greater than 0.\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter number %d: ", i + 1);
            scanf("%f", &arr[i]);
        }

        printf("Unique elements in the array are: ");

        for (i = 0; i < n; i++)
        {
            freq = 0;
            for (j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    freq++;
                }
            }
            if (freq == 1)
            {
                printf("%.2f ", arr[i], freq);
            }
        }
    }
    // getch(); // For Turbo C++
}