#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ch = ch ^ 32; // Toggle case using bitwise XOR

    printf("Toggled character: %c\n", ch);

    return 0;
}
