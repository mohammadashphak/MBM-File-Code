// Write a program in C to count a total number of duplicate elements in an array.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, n, freq;
    // clrscr(); // For Turbo C++
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];
    float visited[n];

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

        for (i = 0; i < n; i++)
        {
            freq = 0;
            for (j = 1; j < n; j++)
            {
                if (arr[i] == arr[j] && arr[i] != visited[j])
                {
                    freq++;
                    visited[j] = arr[i];
                }
            }
            if (freq != 0)
            {
                printf("Frequency of %.2f = %d\n", arr[i], freq);
            }
        }
    }
    // getch(); // For Turbo C++
}