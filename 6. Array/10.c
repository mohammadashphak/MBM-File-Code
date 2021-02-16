// C Program to Find Transpose of a Matrix.

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

    int matrix[rows][columns];

    if (rows < 1 || columns < 1)
    {
        printf("Error! rows and columns should be greater than 0.\n");
    }
    else
    {
        printf("Enter Matrix\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("Enter a%d%d: ", i + 1, j + 1);
                scanf("%d", &matrix[i][j]);
            }
        }

        printf("Transpose of Matrix\n");
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < columns; j++)
            {
                printf("%d ", matrix[j][i]);
            }
            printf("\n");
        }
    }
    // getch(); // For Turbo C++
}