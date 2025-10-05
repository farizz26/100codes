//Find the first repeating lowercase alphabet in a string.


#include <stdio.h>

char first_repeating_lowercase(const char *str) {
    int freq[26] = {0};  
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                return ch; 
            }
            freq[ch - 'a']++;
        }
    }

    return '\0'; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    char result = first_repeating_lowercase(str);

    if (result != '\0')
        printf("First repeating lowercase alphabet: %c\n", result);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
