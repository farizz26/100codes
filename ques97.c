//Print the initials of a name.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    gets(name); 
    printf("Initials: ");
    if (name[0] != ' ')
        printf("%c", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ')
            printf("%c", name[i + 1]);
    }

    return 0;
}
