//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int max_current = arr[0];
    int max_global = arr[0];

    for (int i = 1; i < n; i++) {
        if (max_current < 0)
            max_current = arr[i];
        else
            max_current += arr[i];

        if (max_current > max_global)
            max_global = max_current;
    }

    return max_global;
}

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Calculate max subarray sum using Kadane's Algorithm
    int max_sum = maxSubArraySum(arr, n);

    // Output result
    printf("Maximum subarray sum is: %d\n", max_sum);

    return 0;
}
