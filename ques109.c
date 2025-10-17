// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int* nums, int numsSize, int* answer) {
    int* left = (int*)malloc(sizeof(int) * numsSize);
    int* right = (int*)malloc(sizeof(int) * numsSize);

    left[0] = 1;
    right[numsSize - 1] = 1;

    for (int i = 1; i < numsSize; i++) {
        left[i] = nums[i - 1] * left[i - 1];
    }

    for (int i = numsSize - 2; i >= 0; i--) {
        right[i] = nums[i + 1] * right[i + 1];
    }

    for (int i = 0; i < numsSize; i++) {
        answer[i] = left[i] * right[i];
    }

    free(left);
    free(right);
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int answer[numsSize];

    productExceptSelf(nums, numsSize, answer);

    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", answer[i]);
        if (i != numsSize - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
