// C Program to Add Two Matrix Using Multi-dimensional Arrays.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, rows, columns;
    // clrscr(); // For Turbo C++
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns];

    if (rows < 1 || columns < 1)
    {
        printf("Error! rows and columns should be greater than 0.\n");
    }
    else
    {
        printf("Matrix 1\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("Enter a%d%d: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Matrix 2\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("Enter a%d%d: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }

        printf("Sum of Matrix 1 and Matrix 2\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("%d ", matrix1[i][j] + matrix2[i][j]);
            }
            printf("\n");
        }
    }
    // getch(); // For Turbo C++
}