#include <stdio.h>

int main() {
    int sum = 0, count = 0;

    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            printf("%d ", i);
            sum += i;
            count++;
        }
    }
    
    printf("\nCount: %d\nSum: %d\n", count, sum);
    return 0;
}
