#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0; // If divisible, not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime\n", num);
    else
        printf("Not Prime.\n", num);

    return 0;
}




























