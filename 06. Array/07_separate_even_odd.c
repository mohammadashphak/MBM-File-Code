// Write a program in C to separate odd and even integers in separate arrays

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, k, n;
    // clrscr(); // For Turbo C++
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];

    if (n < 1)
    {
        printf("Error! number should be greater than 0.\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &arr[i]);
        }

        j = 0;
        k = 0;

        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even[j] = arr[i];
                j++;
            }
            else
            {
                odd[k] = arr[i];
                k++;
            }
        }

        printf("Array of even numbers = [");
        for (i = 0; i < j - 1; i++)
        {
            printf("%d, ", even[i]);
        }
        printf("%d]\n", even[j - 1]);

        printf("Array of odd numbers = [");
        for (i = 0; i < k - 1; i++)
        {
            printf("%d, ", odd[i]);
        }
        printf("%d]", odd[k - 1]);
    }
    // getch(); // For Turbo C++
}