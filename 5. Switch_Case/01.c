// C Program to Make a Simple Calculator.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    char operator;
    float first, second;

    // clrscr(); // For Turbo C++
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);

    printf("Enter first operand: ");
    scanf("%f", &first);

    printf("Enter second operand: ");
    scanf("%f", &second);

    switch (operator)
    {
    case '+':
        printf("%.1f + %.1f = %.1f", first, second, first + second);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", first, second, first - second);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", first, second, first * second);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
    // getch(); // For Turbo C++
}