//4.WAP to print table up to given numbers.
#include <stdio.h>

int main() {
    int num, i, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication table:\n ");
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= 10; j++) {
            printf("\n%d x %d = %d", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}

