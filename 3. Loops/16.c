// C Program to Display Factors of a Number.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num;

    // clrscr(); // For Turbo C++

    printf("Enter the number\n");
    scanf("%d", &num);

    printf("********************\n");
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("********************\n");

    // getch(); // For Turbo C++
}