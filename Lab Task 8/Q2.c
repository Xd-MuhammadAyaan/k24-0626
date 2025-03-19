#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter an odd number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    for (i = n; i > 0; i -= 2) {
        for (j = 0; j < (n - i) / 2; j++)
            printf("  ");
        for (j = 0; j < i; j++)
            printf("%d ", i);
        printf("\n");
    }
    
    return 0;
}
