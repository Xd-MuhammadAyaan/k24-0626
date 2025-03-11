#include <stdio.h>

int main() {
    int start, end, isPrime;
    printf("Enter first number: ");
    scanf("%d", &start);
    printf("Enter second number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i < 2) continue;
        isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) printf("%d ", i);
    }

    return 0;
}
