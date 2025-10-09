//Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>
#include <string.h>

int main() {
    char date[20], newDate[20];
    int day, year;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/04/%d", &day, &year);

    sprintf(newDate, "%02d-Apr-%04d", day, year);

    printf("Formatted date: %s\n", newDate);

    return 0;
}
