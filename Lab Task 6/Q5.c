#include <stdio.h>

int main() {
    int num, count = 0, sum = 0;
    float avg;
    
    while (1) {
        printf("Enter a number (negative to stop): ");
        scanf("%d", &num);
        if (num < 0) break;
        sum += num;
        count++;
    }

    avg = (count == 0) ? 0 : (float)sum / count;
    printf("Average: %.2f\n", avg);
    return 0;
}
