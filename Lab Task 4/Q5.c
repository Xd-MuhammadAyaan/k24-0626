#include<stdio.h>
#include<string.h>
int main(){
    int Id,unit;
    float bill,surcharge=0,total;
    char name[50];
    scanf("%d",&Id);
    scanf("%d",&unit);
    scanf("%s", name);
    if(unit>0 && unit<=199){
        bill=16.20*unit;
        if(bill>18000){
            surcharge=0.15*bill;
        }
        total=bill+surcharge;
        printf("Customer ID: %d\n",Id);
        printf("Customer Name: %s\n",name);
        printf("Units Consumed: %d\n",unit);
        printf("Amount per unit: %.2f\n",bill);
        printf("Surcharge: %.2f\n",surcharge);
        printf("Total bill: %.2f\n",total);
    }
    else if(unit>=200 && unit<300){
        bill=(199*16.20)+((unit-199)*20.10);
        if(bill>18000){
            surcharge=0.15*bill;
        }
        total=bill+surcharge;
        printf("Customer ID: %d\n",Id);
        printf("Customer Name: %s\n",name);
        printf("Units Consumed: %d\n",unit);
        printf("Amount per unit: %.2f\n",bill);
        printf("Surcharge: %.2f\n",surcharge);
        printf("Total bill: %.2f\n",total);
    }
    else if(unit>=300 && unit<500){
        bill=(199*16.20)+(100*20.10)+((unit-299)*27.10);
        if(bill>18000){
            surcharge=0.15*bill;
        }
        total=bill+surcharge;
        printf("Customer ID: %d\n",Id);
        printf("Customer Name: %s\n",name);
        printf("Units Consumed: %d\n",unit);
        printf("Amount per unit: %.2f\n",bill);
        printf("Surcharge: %.2f\n",surcharge);
        printf("Total bill: %.2f\n",total);
    }
    else{
        bill=(199*16.20)+(100*20.10)+(200*27.10)+((unit-499)*35.90);
        if(bill>18000){
            surcharge=0.15*bill;
        }
        total=bill+surcharge;
        printf("Customer ID: %d\n",Id);
        printf("Customer Name: %s\n",name);
        printf("Units Consumed: %d\n",unit);
        printf("Amount per unit: %.2f\n",bill);
        printf("Surcharge: %.2f\n",surcharge);
        printf("Total bill: %.2f\n",total);
    }
    return 0;
}
