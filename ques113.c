//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};  
    int k = 4; 
    int n = sizeof(arr) / sizeof(arr[0]);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 1;
    }

    qsort(arr, n, sizeof(int), compare);

    printf("%d\n", arr[k - 1]);

    return 0;
}
