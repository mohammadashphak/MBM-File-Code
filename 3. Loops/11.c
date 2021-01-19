// C Program to Check Whether a Number is Palindrome or Not.

#include <stdio.h>
#include <math.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, num, sum, single;
    char arr[10];

    // clrscr(); // For Turbo C++

    printf("Enter the number\n");
    scanf("%d", &num);
    sum = 0;
    single = num;

    for (i = 0; single; i++)
    {
        // arr[i] = num % 10;
        sum = sum * 10 + single % 10;
        single = single / 10;
        // printf("%d\n", arr[i]);
    }
    if (num == sum)
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not a palindrome.\n");
    }

    // getch(); // For Turbo C++
}