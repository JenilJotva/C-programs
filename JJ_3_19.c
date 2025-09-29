#include <stdio.h>

int main() {
    int i;

    printf("Numbers between 1 and 100 divisible by 5:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0) {  
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
