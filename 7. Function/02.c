// C program to find maximum element in array using function.

#include <stdio.h>
// #include <conio.h> // For Turbo C++
void maximum(float arr[], int n);

void main()
{
    int i, n;
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

        maximum(arr, n);
    }
    // getch(); // For Turbo C++
}

void maximum(float arr[], int n)
{
    int i;
    float max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Maximum element = %.2f", max);
}