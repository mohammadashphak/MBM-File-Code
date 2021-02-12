/* 
Print the following pattern.
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
*/

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    int i, j, rows, space, fact_i, fact_j, fact_i_minus_j, a;

    // clrscr(); // For Turbo C++
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (j % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                fact_i = 1;
                fact_j = 1;
                fact_i_minus_j = 1;

                for (a = 1; a <= i - 1; a++)
                {
                    fact_i *= a;
                }

                for (a = 1; a <= (j - 1) / 2; a++)
                {
                    fact_j *= a;
                }

                for (a = 1; a <= (i - 1) - (j - 1) / 2; a++)
                {
                    fact_i_minus_j *= a;
                }

                printf("%3d", fact_i / (fact_i_minus_j * fact_j));
            }
        }
        printf("\n");
    }

    // getch(); // For Turbo C++
}