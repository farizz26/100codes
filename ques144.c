//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/



#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, idx = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[idx].marks) {
            idx = i;
        }
    }
    return s[idx];   // returning structure
}

int main() {
    int n = 3;
    struct Student s[n];

    // Sample Input
    strcpy(s[0].name, "Riya");
    s[0].roll = 101;
    s[0].marks = 89;

    strcpy(s[1].name, "Karan");
    s[1].roll = 102;
    s[1].marks = 96;

    strcpy(s[2].name, "Meena");
    s[2].roll = 103;
    s[2].marks = 92;

    struct Student top = getTopStudent(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           top.name, top.roll, top.marks);

    return 0;
}
