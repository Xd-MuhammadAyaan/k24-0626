#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter the two Integer values:");
    scanf("%d",&num1);
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("Your swapped numbers are\n %d,%d",num1,num2);
    return 0;
}