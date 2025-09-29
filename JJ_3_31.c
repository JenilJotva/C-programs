#include <stdio.h>

int main() {
    int num, i, isPrime;
    long sum = 0;

    for (num = 2; num <= 500; num++) { 
        isPrime = 1; 

        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            sum += num; 
        }
    }

    printf("Sum of prime numbers between 1 and 500 = %ld\n", sum);

    return 0;
}
