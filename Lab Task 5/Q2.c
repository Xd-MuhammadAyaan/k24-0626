#include <stdio.h>

int main() {
    int speed;

    printf("Enter vehicle speed (km/h): ");
    scanf("%d", &speed);

    if (speed > 100)
        printf("Overspeeding!\n");
    else if (speed >= 60)
        printf("Normal driving speed.\n");
    else if (speed >= 30)
        printf("Slow driving.\n");
    else
        printf("Very slow or stationary.\n");

    return 0;
}
