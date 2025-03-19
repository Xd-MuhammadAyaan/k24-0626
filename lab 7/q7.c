#include<stdio.h>
int main(){
	int j,i,n,sum=0;
	printf("Enter size of array:");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}	
	for(j=0;j<n;j++){
		sum=sum+arr[j];
	}
	printf("Sum of array's elements is= %d", sum);
	
	return 0;
}