//15.calculate the sum of 10 numbers of using of while loop
#include <stdio.h>

int main() {
    int num, i = 1, sum = 0;

    while (i <= 10) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
        i++;
    }

    printf("Sum of the 10 numbers: %d\n", sum);

    return 0;
}

