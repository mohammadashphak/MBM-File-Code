// C Program to Find Largest Element of an Array.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, n;
    float larg;
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
        larg = arr[0];

        for (i = 0; i < n; i++)
        {
            printf("Enter number %d: ", i + 1);
            scanf("%f", &arr[i]);
        }

        for (i = 1; i < n; i++)
        {
            if (larg < arr[i])
            {
                larg = arr[i];
            }
        }

        printf("Largest element = %.2f", larg);
    }
    // getch(); // For Turbo C++
}