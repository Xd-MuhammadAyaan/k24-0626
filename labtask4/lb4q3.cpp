#include<stdio.h>
int main(){
	int cp;
	float sp,saved;
	printf("Enter the cost:");
	scanf("%d", &cp);
	if (cp<1500){
		printf("Original price: Rs.%d\n", cp);
		sp = cp - (cp*0.07);
		printf("Discounted price: Rs.%f\n", sp);
		saved = cp - sp;
		printf("Money saved: Rs%f\n", saved);
	}
	else if (cp>=1500 && cp<3000){
		printf("Original price: Rs.%d\n", cp);
		sp = cp - (cp*0.12);
		printf("Discounted price: Rs.%f\n", sp);
		saved = cp - sp;
		printf("Money saved: Rs%f\n", saved);
	}
	else if (cp>=3000 && cp<=5000){
		printf("Original price: Rs.%d\n", cp);
		sp = cp - (cp*0.22);
		printf("Discounted price: Rs.%f\n", sp);
		saved = cp - sp;
		printf("Money saved: Rs%f\n", saved);
	}
	else if (cp>5000){
		printf("Original price: Rs.%d\n", cp);
		sp = cp - (cp*0.30);
		printf("Discounted price: Rs.%f\n", sp);
		saved = cp - sp;
		printf("Money saved: Rs%f\n", saved);
	}
	return 0;
}
