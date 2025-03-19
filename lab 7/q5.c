#include <stdio.h>

int main() {
    for (int i = 0; i < 7; i++) {
        if (i % 2 == 0) {
            
            for (int j = 0; j < 4; j++) {
                if (j <= i) {
                    printf("%d ", i);
                }
            }
        } else {
           
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
