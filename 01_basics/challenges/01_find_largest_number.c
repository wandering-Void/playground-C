//Challenge 1: Find the largest number

#include<stdio.h> 

int main() {

    //declearing int variables
    int num1, num2;
    int large;

    //asking user for numbers
    printf("Enter any two numbers:\n");
    scanf("%d %d", &num1, &num2);

    //comparing both numbers
    large = (num1 > num2) ? num1 : num2;

    //displaying larger number
    printf("%d is largest in %d and %d.\n", large, num1, num2);

    return 0;
}