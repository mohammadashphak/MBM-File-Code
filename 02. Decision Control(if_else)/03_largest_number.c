// C Program to Find the Largest Number Among Three Numbers.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int num1, num2, num3;

    // clrscr(); // For Turbo C++
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("Enter 3rd number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("The largest number among three you entered is %d\n", num1);
    }
    else if (num2 > num3)
    {
        printf("The largest number among three you entered is %d\n", num2);
    }
    else
    {
        printf("The largest number among three you entered is %d\n", num3);
    }

    // getch(); // For Turbo C++
}