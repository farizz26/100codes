//Remove all vowels from a string

#include <stdio.h>
#include <ctype.h>

int is_vowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

void remove_vowels(char *str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (!is_vowel(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");

    remove_vowels(str);

    printf("String without vowels: %s\n", str);

    return 0;
}
