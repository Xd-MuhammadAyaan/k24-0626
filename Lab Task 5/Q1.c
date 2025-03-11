#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20], subscription[10];

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    printf("Enter subscription type (Basic/Standard/Premium): ");
    scanf("%s", subscription);

    if (strcmp(username, "user1") == 0 && strcmp(password, "pass123") == 0) {
        if (strcmp(subscription, "Premium") == 0)
            printf("Access granted to all content categories.\n");
        else if (strcmp(subscription, "Standard") == 0)
            printf("Access granted to standard content categories.\n");
        else if (strcmp(subscription, "Basic") == 0)
            printf("Access granted to basic content categories.\n");
        else
            printf("Invalid subscription type.\n");
    } else {
        printf("Invalid login credentials.\n");
    }

    return 0;
}
