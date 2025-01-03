//demonstrate the use of do-while-loop 
//example: updated calculator

#include <stdio.h>

int main() {

    
    int choice;

    do {
        // Displaying the menu
        printf("\n--- Menu ---\n");
        printf("1. Add two numbers\n");
        printf("2. Multiply two numbers\n");
        printf("3. Subtract two numbers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Handling user choice
        switch (choice) {
            case 1: {
                int a, b;
                printf("Enter two numbers to add: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a + b);
                break;
            }
            case 2: {
                int a, b;
                printf("Enter two numbers to multiply: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a * b);
                break;
            }
            case 3: {
                int a, b;
                printf("Enter two numbers to subtract (a - b): ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a - b);
                break;
            }
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
