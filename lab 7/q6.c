#include <stdio.h>

int main() {
    int sticks_left = 21;  
    int user_pick, comp_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("There are 21 matchsticks in total.\n");

    while (sticks_left > 1) {  
        printf("\nMatchsticks remaining: %d\n", sticks_left);
        while (1) {
            printf("How many matchsticks do you want to pick (1-4)? ");
            scanf("%d", &user_pick);

            if (user_pick >= 1 && user_pick <= 4 && user_pick <= sticks_left) {
                break;
            } else {
                printf("Invalid input. Please pick a number between 1 and 4 that is not more than the remaining matchsticks.\n");
            }
        }
        sticks_left -= user_pick;
        if (sticks_left == 1) {
            printf("\nYou are forced to pick the last matchstick. You lose!\n");
            break;
        }
        printf("\nMatchsticks remaining: %d\n", sticks_left);
        if (sticks_left % 5 == 0) {
            comp_pick = 1;  
        } else {
            comp_pick = (sticks_left - 1) % 5;  
            if (comp_pick == 0) {
                comp_pick = 1; 
            }
        }
        printf("Computer picks %d matchsticks.\n", comp_pick);
        sticks_left -= comp_pick;
        if (sticks_left == 1) {
            printf("\nThe computer is forced to pick the last matchstick. The computer loses!\n");
            break;
        }
    }

    return 0;
}
