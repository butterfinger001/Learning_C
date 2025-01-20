#include <stdio.h>

int main() {
    FILE *inputFile, * outputFile;
    int num1, num2, result;

    //Open input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input");
        return 1; //Exit with an error code
    }

    //Read two integers from the input file
    if (fscanf(inputFile, "%d %d", &num1, &num2) != 2) {
        //Handle input error using perror()
        perror("Error reading inout from file");
        fclose(inputFile); //Close the input file
        return 1; //Exit wth an error code 
    }

    fclose(inputFile); //Close the input file
    //Perform Multiplication
    result = num1 * num2;

    //Open an output file for writing 
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror ("Error opening output file");
        return 1; //Exit with an error code
    }

    //Write the result of an output file 
    if (fprintf(outputFile, "Multiplication result: %d\n", result) < 0 ) {
        //Handle output error using perror()
        perror("Error writing output to file");
        fclose(outputFile); //Close the output file before exiting
        return 1; //Exit with an error code
    }

    fclose(outputFile); //Close the output file
    printf("Operation completed successfully.\n");

    return 0;
}