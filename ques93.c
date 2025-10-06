//Check if two strings are anagrams of each other

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define CHAR_RANGE 256 
int areAnagrams(const char *str1, const char *str2) {
    if (strlen(str1) != strlen(str2))
        return 0;

    int count[CHAR_RANGE] = {0};

    for (int i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");

    return 0;
}
