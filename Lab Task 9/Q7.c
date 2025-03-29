#include <stdio.h>
void toUpperCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
}
void removeNewline(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}
int main() {
    int max_students = 10;
    int max_name_length = 50;
    char students[10][50]; 
    int n, i;
    printf("Enter the number of students (max 10): ");
    scanf("%d", &n);
    if (n > max_students || n <= 0) {
        printf("Invalid number of students! Exiting...\n");
        return 1;
    }
    while (getchar() != '\n');
    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i], max_name_length, stdin);
        removeNewline(students[i]);
        toUpperCase(students[i]);
    }
    printf("\nFormatted Names:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", students[i]);
    }
    return 0;
}
