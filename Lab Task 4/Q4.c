#include<stdio.h>
int main(){
    float actual,saved,final;
    printf("Enter the total cost:");
    scanf("%f",&actual);
    if(actual>=500){
        if(actual<2000){
            saved=0.05*actual;
            final=actual-saved;
            printf("The actual amount is:%.2f",actual);
            printf("The saved amount is:%.2f",saved);
            printf("The discounted amount is:%.2f",final);
        }
        else if(actual>=2000 && actual<4000){
            saved=0.10*actual;
            final=actual-saved;
            printf("The actual amount is:%.2f",actual);
            printf("The saved amount is:%.2f",saved);
            printf("The discounted amount is:%.2f",final);
        }
        else if(actual>=4000 && actual<6000){
            saved=0.20*actual;
            final=actual-saved;
            printf("The actual amount is:%.2f",actual);
            printf("The saved amount is:%.2f",saved);
            printf("The discounted amount is:%.2f",final);
        }
        else{
            saved=0.35*actual;
            final=actual-saved;
            printf("The actual amount is:%.2f",actual);
            printf("The saved amount is:%.2f",saved);
            printf("The discounted amount is:%.2f",final);
        }
    }
    else printf("Not eligible for discount.Your amount is:%.2f",actual);
    return 0;
}