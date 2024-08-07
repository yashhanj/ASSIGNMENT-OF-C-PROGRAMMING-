//11.accept 5 names from user at run time
#include <stdio.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int i;

    printf("Enter 5 names:\n");

    for (i = 0; i < MAX_NAMES; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nEntered names:\n");
    for (i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

