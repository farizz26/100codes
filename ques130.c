//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/


#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "numbers.txt";
    int num, count = 0;
    float sum = 0, avg;

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
    } else {
        avg = sum / count;
        printf("Sum = %.0f\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
