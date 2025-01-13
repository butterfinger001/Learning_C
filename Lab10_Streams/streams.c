#include <stdio.h>

//Code Incomplete not working properly

int main () {
    
    //Declaring integers for input and result
    int number;
    int result;

    //Prompt the user to type in an input
    printf("Enter a Number: ");

    //Read user input 
    scanf("%d", &number);

    //Compare user input value
    if (number != 2) {
        perror("Error reading Input");
        return 1; //Exit without an error
    }

    //Perform a simple multiplication
    result = number * number;

    //Display the results
    printf("The square of %d is: %d\n", number, result);

    return 0; //Exit successfully

}