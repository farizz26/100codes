//Find the longest word in a sentence

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    char longest[100] = "";
    char current[100];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (1) {
        char c = sentence[i];

        if (isalpha(c)) {
            current[j++] = c;
        } else {
            if (j > 0) {
                current[j] = '\0';
                if (j > maxLength) {
                    maxLength = j;
                    strcpy(longest, current);
                }
                j = 0; 
            }
            if (c == '\0')
                break;
        }

        i++;
    }

    if (maxLength > 0)
        printf("Longest word: %s (Length: %d)\n", longest, maxLength);
    else
        printf("No words found.\n");

    return 0;
}
