//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/



#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp, readEmp;

    FILE *fp;

   
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

 
    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

   
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(&readEmp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Data Read From File ---\n");
    printf("ID: %d\n", readEmp.id);
    printf("Name: %s\n", readEmp.name);
    printf("Salary: %.2f\n", readEmp.salary);

    return 0;
}
