//10.write a program you to make a summation of first and last digit.(e.g., 1234 ans:- 5)
#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    last_digit = num % 10;

    while (num >= 10) {
        num /= 10;
    }
    first_digit = num;

    sum = first_digit + last_digit;

    printf("Sum of first and last digits: %d\n", sum);

    return 0;
}

