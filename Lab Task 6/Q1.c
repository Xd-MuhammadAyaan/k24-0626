#include <stdio.h>

int main() {
    int num, sum = 0;
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        sum += num;
        printf("Sum: %d\n", sum);
    } while (num != 0);
    return 0;
}
