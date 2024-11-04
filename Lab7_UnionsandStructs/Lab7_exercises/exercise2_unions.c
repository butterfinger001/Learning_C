#include <stdio.h>

/**
* @union Data
* @brief Represents different types of data (integer, float, char).
*/
union Data {
    int integerData; ///< Integer data.
    float floatData; ///< Float data.
};

/**
* @brief Prints details of data, detecting its type.
* @param d The data to be printed.
*/
void printData(union Data d) {
    printf("Data: ");
    printf("%d (Integer)\n", d.integerData);
    printf("%f (Float)\n", d.floatData);
   
}

/**
* @brief Main function where the program starts execution.
*/
int main() {
    // Create an instance of Data, assign values, and print details
    union Data data1;
    data1.floatData = 123.45f;
    printData(data1);

    return 0;
}
