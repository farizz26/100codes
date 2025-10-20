//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>

#define MAX 1000

void printFirstNegative(int arr[], int n, int k) {
    int negIndex[MAX];
    int front = 0, rear = -1;

    for (int i = 0; i <= n - k; i++) {
        // Remove out-of-window indices
        while (front <= rear && negIndex[front] < i) {
            front++;
        }

        // Add new negative element from the current window
        int j = i + k - 1;
        if (arr[j] < 0) {
            rear++;
            negIndex[rear] = j;
        }

        // Print first negative number in the current window
        if (front <= rear) {
            printf("%d ", arr[negIndex[front]]);
        } else {
            printf("0 ");
        }
    }
}

int main() {
    int arr[MAX], n, k;

    // Input array size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    // Edge case check
    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 1;
    }

    printFirstNegative(arr, n, k);

    return 0;
}
