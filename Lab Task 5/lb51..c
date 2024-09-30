#include<stdio.h>
int main(){
	int age;
	char nationality;
	printf("Enter your age:");
	scanf("%d", &age);
	if (age<18){
		printf("Not eligible for voting");
	}
	else{
		printf("Are you a citizen?(Y for Yes and N for No):");
		scanf(" %c", &nationality);
		if (nationality ="Y"){
			printf("Eligible for voting");
		}
		else if (nationality ="N"){
			printf("Not eligible for voting");
		}
	} 
	return 0;
}