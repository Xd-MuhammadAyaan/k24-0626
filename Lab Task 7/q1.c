#include<stdio.h>
int main(){
int num,i;
	int Array[6] = {4,7,10,5,6,1};
	printf("Enter the number:");
	scanf("%d", &num);
	for (i=0;i<6;i++){	
		if(Array[i]==num){
			printf("%d found at index %d",num,i);
			return 0;
		}
		
	}
		printf("Number not found");
		return 0;
}
	
		
		

