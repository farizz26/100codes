//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);

    char *wordStart = NULL;
    char *temp = str;

    while (*temp) {
        if (wordStart == NULL && *temp != ' ')
            wordStart = temp;  

        if ((wordStart && (*(temp + 1) == ' ' || *(temp + 1) == '\0'))) {
            reverseWord(wordStart, temp); 
            wordStart = NULL; 
        }
        temp++;
    }

    printf("Reversed each word: %s\n", str);
    return 0;
}
