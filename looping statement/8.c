//8.write a program to find out the max from given numbers (e.g.,no:-1562 max number is 6).
#include <stdio.h>

int main() {
    int num, max_digit = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        num /= 10;
    }

    printf("The maximum digit is: %d\n", max_digit);

    return 0;
}

