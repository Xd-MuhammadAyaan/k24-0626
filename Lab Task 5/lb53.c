#include<stdio.h>
int main(){
	float percent;
	char grade;
	printf("Enter the percentage:");
	scanf("%f",&percent);
	grade=(percent>=90)? 'A':
	(percent>=80)? 'B' :
    (percent>=70) ? 'C' :
    (percent>=60) ? 'D' : 'F';
	
	printf("Your grade is:%c",grade);
		
	return 0;
	
	

}