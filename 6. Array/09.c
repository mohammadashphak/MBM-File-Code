// C Program to Multiply two Matrix Using Multi-dimensional Arrays.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, k, rows1, columns1, rows2, columns2, temp;
    // clrscr(); // For Turbo C++
    printf("Enter the number of rows for Matrix 1: ");
    scanf("%d", &rows1);

    printf("Enter the number of columns for Matrix 1: ");
    scanf("%d", &columns1);

    rows2 = columns1;

    printf("Number of rows for Matrix 2 = %d\n", rows2);

    printf("Enter the number of columns for Matrix 2: ");
    scanf("%d", &columns2);

    int matrix1[rows1][columns1], matrix2[rows2][columns2];

    if (rows1 < 1 || columns1 < 1 || columns2 < 0)
    {
        printf("Error! rows and columns should be greater than 0.\n");
    }
    else
    {
        printf("Matrix 1\n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < columns1; j++)
            {
                printf("Enter a%d%d: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Matrix 2\n");
        for (i = 0; i < rows2; i++)
        {
            for (j = 0; j < columns2; j++)
            {
                printf("Enter a%d%d: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }

        printf("Multiply of Matrix 1 and Matrix 2\n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < columns2; j++)
            {
                temp = 0;
                for (k = 0; k < columns1; k++)
                {
                    temp += matrix1[i][k] * matrix2[k][j];
                }
                printf("%d ", temp);
            }
            printf("\n");
        }
    }
    // getch(); // For Turbo C++
}