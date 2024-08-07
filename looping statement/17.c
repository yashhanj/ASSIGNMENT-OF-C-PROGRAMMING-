//17.calculate 5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>

int main() {
    int num, i = 1, even_count = 0, odd_count = 0;

    while (i <= 5) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        i++;
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

    return 0;
}

