//demonstrate how to nest a for-loop
//example: print a right sided pyramid

#include<stdio.h>

int main() {

    //declaring variables
    int i, j, n;

    //asking user for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    //initiating for-loop
    //i represents row
    for(i = 1; i <= n; i++) {

        //j represents column
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}