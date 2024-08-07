//16.calculate the sum of natural numbers using the while loop
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1;
    }

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of natural numbers up to %d: %d\n", n, sum);

    return 0;
}

