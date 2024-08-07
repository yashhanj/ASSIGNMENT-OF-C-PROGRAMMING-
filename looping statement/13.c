//13.calculate the factorial of a given number using while loop
#include <stdio.h>

int main() {
    int num, i = 1, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    while (i <= num) {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}

