//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int len, i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name); 

    len = strlen(name);

    for (i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Output: ");

    if (name[0] != ' ')
        printf("%c.", name[0]);

    for (i = 1; i < len; i++) {
        if (name[i] == ' ' && i != lastSpace && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c.", name[i + 1]);
    }

    if (lastSpace != -1) {
        printf(" %s", &name[lastSpace + 1]);
    }

    return 0;
}
