#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    double num1, num2, result;
    char again;

    do {
        system("clear"); // use "cls" instead of "clear" on Windows
        printf("=== Mini Calculator ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Choose an option (1-5): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter the first number: ");
            scanf("%lf", &num1);
            printf("Enter the second number: ");
            scanf("%lf", &num2);

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                    break;
                case 2:
                    result = num1 - num2;
                    printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                    break;
                case 3:
                    result = num1 * num2;
                    printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                    break;
                case 4:
                    if (num2 != 0) {
                        result = num1 / num2;
                        printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                    } else {
                        printf("Error: Cannot divide by zero.\n");
                    }
                    break;
            }
        } else if (choice == 5) {
            printf("Exiting program...\n");
            break;
        } else {
            printf("Invalid option. Please try again.\n");
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &again); // space before %c is important to consume newline
    } while (again == 'y' || again == 'Y');

    printf("Goodbye!\n");
    return 0;
}