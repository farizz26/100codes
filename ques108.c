#include <stdio.h>

#define MAX 1000

void findPreviousGreater(int arr[], int n) {
    int stack[MAX];
    int top = -1;

    for (int i = 0; i < n; i++) {
        // Pop elements that are less than or equal to arr[i]
        while (top != -1 && stack[top] <= arr[i]) {
            top--;
        }

        if (top == -1)
            printf("-1 ");
        else
            printf("%d ", stack[top]);

        // Push current element to stack
        stack[++top] = arr[i];
    }
    printf("\n");
}

int main() {
    int arr[MAX], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous greater elements: ");
    findPreviousGreater(arr, n);

    return 0;
}
