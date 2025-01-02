//introduction of reading input and then displaying in C

#include<stdio.h>

int main() {

    //declaring input variable
    int age; 

    //reading input
    printf("How old are you?\n"); //prompt for input
    scanf("%d", &age); //reading the input 

    //displaying output 
    printf("I am %d years old.\n", age); 

    return 0;
}