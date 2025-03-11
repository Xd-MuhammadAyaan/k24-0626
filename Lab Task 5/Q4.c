#include <stdio.h>

int main() {
    int age, weight, medical_condition;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter weight (kg): ");
    scanf("%d", &weight);
    printf("Do you have a medical condition? (1 for Yes, 0 for No): ");
    scanf("%d", &medical_condition);

    if (age >= 18 && weight >= 50 && medical_condition == 0)
        printf("Eligible for gym membership.\n");
    else
        printf("Not eligible for gym membership.\n");

    return 0;
}
