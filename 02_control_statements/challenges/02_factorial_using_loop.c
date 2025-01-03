//challenge: calculates the factorial of a number using a for loop

#include<stdio.h>

int main() {

    int i, n;

    //asking user for a number
    printf("Enter a number: ");
    scanf("%d", &n);

    //making a temporary variable for the loop
    int temp = 1;

    //initiating loop
    for(i = 1; i <= n; i++) {
        temp *= i;
    }

    //printing factorial
    printf("Factorial of %d is %d.\n", n, temp);

    return 0;
}