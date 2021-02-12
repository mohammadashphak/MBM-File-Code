// C Program to Display Factors of a Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num;

    // clrscr(); // For Turbo C++

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    // getch(); // For Turbo C++
}