#include <stdio.h>

int main() {
    int a = 1, b = 1, next, sum = 0;
    while (a <= 10000) {
        if (a % 3 == 0 || a % 5 == 0 || a % 7 == 0) {
            sum += a;
        }
        next = a + b;
        a = b;
        b = next;
    }
    printf("Sum of Fibonacci numbers divisible by 3, 5, or 7: %d\n", sum);
    return 0;
}
