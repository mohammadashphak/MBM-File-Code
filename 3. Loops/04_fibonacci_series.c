// C Program to Display Fibonacci Sequence.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num, first, second, nextTerm;

    // clrscr(); // For Turbo C++
    first = 0;
    second = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    if (num < 1)
    {
        printf("Enter a valid number\n");
    }
    else
    {
        printf("*****Fibonacci Series*****\n");
        for (i = 1; i <= num - 1; i++)
        {
            printf("%d, ", first);
            nextTerm = first + second;
            first = second;
            second = nextTerm;
        }
        printf("%d", first);
    }
    // getch(); // For Turbo C++
}