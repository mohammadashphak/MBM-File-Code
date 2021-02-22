// C program to convert binary number to decimal using function.

#include <stdio.h>
// #include <conio.h> // For Turbo C++
#include <math.h>

void toDecimal(int binary);

void main()
{
    int binary, i;
    // clrscr(); // For Turbo C++
    printf("Enter the number in binary format: ");
    scanf("%d", &binary);

    toDecimal(binary);
    // getch(); // For Turbo C++
}

void toDecimal(int binary)
{
    int i, decimal, count, originalBinary, flag;
    count = 0;
    decimal = 0;
    originalBinary = binary;

    while (originalBinary != 0)
    {
        originalBinary /= 10;
        count++;
    }

    if (binary % 10 > 1)
    {
        printf("Enter a valid Binary number.");
    }
    else
    {
        flag = 1;
        for (i = 0; i < count; i++)
        {
            if (binary % 10 > 1)
            {
                flag = 0;
                break;
            }
            else
            {
                decimal = decimal + (binary % 10) * pow(2, i);
                binary /= 10;
            }
        }
        if (flag = 0)
        {
            printf("Enter a valid Binary number");
        }
        else
        {
            printf("Decimal = %d", decimal);
        }
    }
}