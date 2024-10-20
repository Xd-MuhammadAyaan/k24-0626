#include<stdio.h>
int main(){
	int array[30];
	int i,min=100,max=0;
	for(i=0;i<=29;i++){
		printf("Enter Number:");
		scanf("%d", &array[i]);
		if(array[i]<min){
			min=array[i];
		}
		else if(array[i]>max){
			max=array[i];
		}
	}
	printf("Maximum number is= %d\n",max);
	printf("Minimum number is= %d\n",min);
	return 0;
}
