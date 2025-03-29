#include <stdio.h>
int string_length(char word[]) {
    int length = 0;
    while (word[length] != '\0') {
        length++;
    }
    return length;
}
int is_palindrome(char word[]) {
    int len = string_length(word);
    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            return 0; 
        }
    }
    return 1; 
}
void check_palindromes(char words[][20], int num_words) {
    for (int i = 0; i < num_words; i++) {
        if (is_palindrome(words[i])) {
            printf("%s: Palindrome\n", words[i]);
        } else {
            printf("%s: Not Palindrome\n", words[i]);
        }
    }
}
int main() {
    char words[][20] = {
        "madam",
        "hello",
        "racecar",
        "world",
        "level"
    };
    int num_words = sizeof(words) / sizeof(words[0]);
    check_palindromes(words, num_words);
    return 0;
}
