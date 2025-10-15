//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

typedef struct {
    int data[MAX];
    int top;
} Stack;

void push(Stack *s, int value) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s->data[++(s->top)] = value;
}

int pop(Stack *s) {
    if (s->top == -1) {
        return -1;
    }
    return s->data[(s->top)--];
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int peek(Stack *s) {
    if (s->top == -1) {
        return -1;
    }
    return s->data[s->top];
}

void printNextGreater(int arr[], int n) {
    Stack s;
    s.top = -1;
    int result[n];

    for (int i = n - 1; i >= 0; i--) {
        while (!isEmpty(&s) && peek(&s) <= arr[i]) {
            pop(&s);
        }

        if (isEmpty(&s)) {
            result[i] = -1;
        } else {
            result[i] = peek(&s);
        }

        push(&s, arr[i]);
    }

    printf("Next Greater Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d --> %d\n", arr[i], result[i]);
    }
}

int main() {
    int n;
    int arr[MAX];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printNextGreater(arr, n);

    return 0;
}
