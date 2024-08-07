//14.accept 5 numbers from user and find those numbers factorials.
#include <stdio.h>

int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int numbers[5], i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Factorials:\n");
    for (i = 0; i < 5; i++) {
        printf("Factorial of %d = %d\n", numbers[i], factorial(numbers[i]));
    }

    return 0;
}

