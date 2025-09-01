#include <stdio.h>

int main() {
    // Declare variables to store the two numbers and their sum
    int num1, num2, sum;

    // Prompt the user to enter the first number
    printf("Enter the first integer: ");
    // Read the first number from the user and store it in num1
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second integer: ");
    // Read the second number from the user and store it in num2
    scanf("%d", &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the sum to the user
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // Indicate successful program execution
    return 0;
}