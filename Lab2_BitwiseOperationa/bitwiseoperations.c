#include <stdio.h>

void bitwiseOperations(int a, int b) {
    //AND operation
    int andResult = a & b;
    printf("AND result: %d & %d = %d\n", a, b, andResult);

    //OR operation
    int orResults = a | b;
    printf("OR result; %d | %d = %d\n", a, b, orResults);

    //XOR operation 
    int xorResult = a ^ b;
    printf("XOR result: %d ^ %d = %d\n", a, b, xorResult);

    //Negation operation
    int negationA = ~a;
    int negationB = ~b;
    printf("Negation result: ~%d = %d, ~%d = %d\n", a, negationA, b, negationB);
}

int main() {
    //Demonstration values
    int value1 = 15;
    int value2 =7;

    printf("Bitwise operations demonstration:\n");
    bitwiseOperations(value1, value2);

    return 0;
}