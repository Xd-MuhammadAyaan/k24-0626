#include<stdio.h>
int main(){
    float rate,pay,tax,cut;
    printf("Enter your tax-free salary:");
    scanf("%f",&pay);
    printf("Enter your tax rate:");
    scanf("%f",&rate);
    tax=(rate/100)*pay;
    cut=pay-tax;
    printf("The next you need to pay is:%.2f",tax);
    printf("\n");
    printf("Your Salary after taxes is:%.2f",cut);
    return 0;
}
