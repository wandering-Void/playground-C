//challenge: finds the sum of the digits of a given number using a while loop

#include<stdio.h>

int main() {

    int i, n;

    //asking user for the number
    printf("Enter a number: ");
    scanf("%d", &n);

    i = 1;
    int temp = 0;
    int sum = 0;

    //initiating while loop;
    while(n != 0) {
        temp = n % 10;
        n = n / 10;
        sum += temp;
    }

    //printing the sum
    printf("%d is the sum of digits.\n", sum);

    return 0;
}