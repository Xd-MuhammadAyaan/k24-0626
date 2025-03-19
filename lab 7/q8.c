#include<stdio.h>
int main(){
	int n;
	printf("Enter size:");
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("Original array is: \n");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	
	printf("Reversed array is: \n");
	for(int j=n-1;j>=0;j--){
		printf("%d",arr[j]);
	}
	
	
	
	return 0;
}