#include<stdio.h>
int main (){
	float A,B,C;
	printf("Enter the three angles:");
	scanf("%f,%f,%f", &A,&B,&C);
	if (A<=0 || B<=0 || C<=0){
		printf("Wrong angles inputted");
	}
	else{
		if (A+B+C == 180){
			printf("Valid Triangle");
		}
		else{
			printf("Invalid Triangle");
		} 
	}
	return 0;
}