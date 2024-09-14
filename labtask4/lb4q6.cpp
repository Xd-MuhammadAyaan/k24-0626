#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter the first number:");
	scanf("%d", &num1);
	printf("Enter the second number:");
	scanf("%d", &num2);
	if (num1>num2){
		printf("First number is larger\n");
	}
	    if (num1>100){
	    	printf("First number is significantly larger\n");
		} 
	else if (num2>num1){
		printf("second number is larger\n");
	}
	    if(num1<0){
	    	printf("First number is negative and smaller\n");
		}
	return 0;
}

