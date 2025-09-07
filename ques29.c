
#include <stdio.h>
//Write a program to calculate the factorial of a number.

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    long long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        fact = factorial(num);
        printf("Factorial of %d = %lld\n", num, fact);
    }

    return 0;
}
