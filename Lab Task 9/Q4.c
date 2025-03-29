#include<stdio.h>
int calculate(char opr,int a,int b){
    if(opr=='A'){
        return a+b;
    }
    else if(opr=='S'){
        return a-b;
    }
    else if(opr=='M'){
        return a*b;
    }
    else if(opr=='D'){
        return a/b;
    }
    else return 0;
}
int main(){
    char option;
    int x,y;
    printf("Enter option:");
    scanf("%c", &option);
    printf("Enter first number:");
    scanf("%d", &x);
    printf("Enter first number:");
    scanf("%d", &y);
    int result=calculate(option,x,y);
    printf("Answer is: %d",result);
    return 0;

}