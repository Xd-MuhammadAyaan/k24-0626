#include <stdio.h>

int main() {
    int attendance, assignment_score;

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);
    printf("Enter assignment score: ");
    scanf("%d", &assignment_score);

    if (attendance < 75)
        printf("Not allowed to take the exam due to low attendance.\n");
    else if (assignment_score >= 40)
        printf("Eligible to take the exam.\n");
    else
        printf("Not eligible due to low assignment scores.\n");

    return 0;
}
