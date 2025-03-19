#include<stdio.h>
int main(){
	int j,i,n,min=1000000,max=0;
	printf("Enter size of array:");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
    }
    printf("Array is: \n");
    for(i=0;i<n;i++){
    	printf("%d",arr[i]);
	}
	for(j=0;j<n;j++){
		if(arr[j]>max){
			max=arr[j];
		}
		if(arr[j]<min){
			min=arr[j];
		}
	}
	printf("\n");
	printf("Mamimum number is: %d",max);
	printf("\n");
	printf("Minimum number is: %d",min);
    
    return 0;
}