//Sum and Difference of Two Numbers

#include <stdio.h>

int main() {
    float num1, num2, sum, difference;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;

    printf("Sum of %.2f and %.2f is: %.2f\n", num1, num2, sum);
    printf("Difference between %.2f and %.2f is: %.2f\n", num1, num2, difference);

    return 0;
}
