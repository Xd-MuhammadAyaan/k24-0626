#include<stdio.h>
int main(){
    int n;
    float num1,num2,ans;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
    printf("Enter \n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division:\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        ans=num1+num2;
        printf("%.2f",ans);
        break;
        case 2:
        ans=num1-num2;
        printf("%.2f",ans);
        break;
        case 3:
        ans=num1*num2;
        printf("%.2f",ans);
        break;
        case 4:
        ans=num1/num2;
        printf("%.2f",ans);
        break;
        default:printf("Wrong option.");
    }

    return 0;
}