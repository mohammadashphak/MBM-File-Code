// C Program to Make a Simple Calculator using switch-case.

#include <stdio.h>
// #include <conio.h> // For Turbo C++

void main()
{
    char operator;
    float num1, num2;

    // clrscr(); // For Turbo C++
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter first operand: ");
    scanf("%f", &num1);

    printf("Enter second operand: ");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        printf("%.1f + %.1f = %.1f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f", num1, num2, num1 / num2);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
    // getch(); // For Turbo C++
}