//demonstrate how to use switch-case while handling multiple conditions effectively
//example: a simple calculator

#include<stdio.h>

int main() {

    //declaring variables
    int i, j, n;

    //asking user for input
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);

    //asking user to choose an option
    printf("Choose from 1-5\n");
    printf("1. Add the numbers.\n");
    printf("2. Subtract the numbers.\n");
    printf("3. Multiply the numbers.\n");
    printf("4. Divide the numbers.\n");
    printf("5. Exit\n");

    scanf("%d", &n);

    //starting switch-case
    switch(n) {
        case 1: {
            printf("Sum = %d\n", (i + j));//display sum
            break;
        }
        case 2: {
            printf("Difference = %d\n", (i - j));//display difference
            break;
        }
        case 3: {
            printf("Product = %d\n", (i * j));//display multiplication
            break;
        }
        case 4: {
            printf("Division = %d\n", (i / j));//display division
            break;
        }
        case 5: {
            break;//exit
        }
        default: {
            printf("Wrong Choice!\n");//error of choosing anything other than 1-5
        }
    }

    return 0;
}