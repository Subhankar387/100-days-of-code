#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice, num1, num2;

    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (choice) {
        case ADD:
            printf("Addition = %d", num1 + num2);
            break;

        case SUBTRACT:
            printf("Subtraction = %d", num1 - num2);
            break;

        case MULTIPLY:
            printf("Multiplication = %d", num1 * num2);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}