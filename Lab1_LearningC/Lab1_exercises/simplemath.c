#include <stdio.h>

int main() {

    int a;
    int b;

    printf("Enter a Number for a:"); //Ask the user to enter a number and store it in the variable a
    scanf("%d", &a); //Read the number entered by the user and store it in the variable a

    printf("Enter a Number for b:");
    scanf("%d", &b);

    printf("The Answer is: %d\n", a + b); //Print the sum of a and b
}