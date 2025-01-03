//demonstrate the use of if-else statements in condtional implementation of code
//example: identify if the number is odd or even

#include<stdio.h>

int main() {

    //declaring variables
    int i;

    //asking user for a input
    printf("Enter any number: ");
    scanf("%d", &i);

    //checking if the number is even or odd
    if(i % 2 == 0){
        printf("%d is an even number.\n", i);
    }
    else{
        printf("%d is a odd number.\n", i);
    }
    
    return 0;
}