#include <stdio.h>
int main() {
    int i, input[12];  
    int sum[6];     
    for( i = 0; i < 12; i++){
    	printf("Enter 12 numbers:\n");
        scanf("%d", &input[i]);
    }
    for (i=0; i<6; i++) {
        sum[i]=input[2 * i]+input[2*i+1];
    }
    for (i = 0; i < 6; i++) {
        printf("Sum[%d] = %d\n", i, sum[i]);
    }

    return 0;
}

