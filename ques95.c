//Check if one string is a rotation of another.


#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
        return 0;

    char temp[200]; // make sure this is large enough
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL)
        return 1;
    else
        return 0;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (isRotation(str1, str2))
        printf("Yes, \"%s\" is a rotation of \"%s\".\n", str2, str1);
    else
        printf("No, \"%s\" is not a rotation of \"%s\".\n", str2, str1);

    return 0;
}
