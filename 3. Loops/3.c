// C Program to Generate Multiplication Table.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num;

    // clrscr(); // For Turbo C++
    printf("Enter the number of which you want to get multiplication table\n");
    scanf("%d", &num);

    printf("*****Multiplication table of %d.*****\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    // getch(); // For Turbo C++
}