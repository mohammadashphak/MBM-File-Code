// Write a program in C to copy the elements of one array into another array.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int n, i;
    // clrscr(); // For Turbo C++
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int b[n];
    int a[n];

    if (n < 1)
    {
        printf("Error! number should be greater than 0.\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        printf("Array B = [");
        for (i = 0; i < n - 1; i++)
        {
            printf("%d, ", b[i]);
        }
        printf("%d]", b[n - 1]);
    }
    // getch(); // For Turbo C++
}