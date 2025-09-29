#include <stdio.h>

int main() {
    int i, num;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 200 numbers:\n");

    for (i = 1; i <= 200; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("\nTotal positive numbers = %d\n", positive);
    printf("Total negative numbers = %d\n", negative);
    printf("Total zeros = %d\n", zero);

    return 0;
}
