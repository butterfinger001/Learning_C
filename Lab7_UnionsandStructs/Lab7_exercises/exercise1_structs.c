#include <stdio.h>

char name_char[] = "Ryan"; // for text represntation
int age_int = 20; 
float height_float = 6.2;

int main() {

    printf("Name: %s\n", name_char); // %s for strings
    printf("Age: %d\n", age_int); // %d for integers
    printf("Height: %.1f\n", height_float); // %f for floats

    return 0;
}