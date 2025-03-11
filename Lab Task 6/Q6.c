#include <stdio.h>

int main() {
    int n, count = 0, num = 2, product = 1, isPrime;
    printf("Enter N: ");
    scanf("%d", &n);

    while (count < n) {
        isPrime = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            product *= num;
            count++;
        }
        num++;
    }

    printf("Product of first %d prime numbers: %d\n", n, product);
    return 0;
}
