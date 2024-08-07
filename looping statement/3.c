/*3.WAP to take 10 no. input from user find out below values
                a.how many even numbers are there 
                b.how many odd numbers are there
                c.sum of even numbers 
                d.sum of odd numbers*/

#include <stdio.h>

int main() {
    int numbers[10],i, even_count = 0, odd_count = 0, even_sum = 0, odd_sum = 0;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            even_count++;
            even_sum += numbers[i];
        } else {
            odd_count++;
            odd_sum += numbers[i];
        }
    }

    // Print the results
    printf("a. Even numbers: %d\n", even_count);
    printf("b. Odd numbers: %d\n", odd_count);
    printf("c. Sum of even numbers: %d\n", even_sum);
    printf("d. Sum of odd numbers: %d\n", odd_sum);

    return 0;
}


                
