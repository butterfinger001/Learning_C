
#include <stdio.h>

int is_prime(int number) {
    if (number < 2) {
        return 0; // False
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // False
        }
    }
    return 1; // True
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num)) {// calling the function above.
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0; 
}
