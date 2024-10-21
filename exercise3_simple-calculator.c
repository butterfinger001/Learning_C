#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    // Get the operation from the user
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation); // Space before %c handles any whitespace

    // Get the first number
    printf("Enter first number: ");
    scanf("%lf", &num1);  // %lf for reading double values

    // Get the second number
    printf("Enter second number: ");
    scanf("%lf", &num2);  // %lf for reading double values

    // Perform the operation based on user input
    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            // Error: Division by zero
            printf("Cannot divide by zero. Please enter a non-zero second number.\n");
            return 1; // Return an error code
        }
    } else {
        // Error: Invalid operation
        printf("Invalid operation. Please choose +, -, *, or /.\n");
        return 1; // Return an error code
    }

    // Print the result
    printf("Result: %.2lf\n", result);  // Print with two decimal places

    return 0;
}
