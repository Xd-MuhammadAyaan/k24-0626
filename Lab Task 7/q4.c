#include<stdio.h>
int main(){
	int i,total=0;
	int array[15];
	for(i=0;i<15;i++){
		printf("Enter Number:");
		scanf("%d", &array[i]);
		total= total+array[i];
	}
	printf("Sum of array elements is= %d",total);
	return 0;
}
