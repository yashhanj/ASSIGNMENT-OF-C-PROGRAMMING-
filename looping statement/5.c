//5.WAP to print factorial of given number.
#include <stdio.h>

int main() {
    int num, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}
