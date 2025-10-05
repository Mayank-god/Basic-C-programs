//WAP that takes two operands and one operator from user and print the operation..
//.. using the switch statements.

#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter 1st operand: ");
    scanf("%d", &num1);

    printf("Enter 2nd operand: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  

    switch (operator) {
        case '+':
            printf("Addition = %d\n", num1 + num2);
            break;

        case '-':
            printf("Subtraction = %d\n", num1 - num2);
            break;

        case '*':
            printf("Multiplication = %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Division = %d\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Modulus = %d\n", num1 % num2);
            else
                printf("Error: Modulus by zero!\n");
            break;

        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
    
}