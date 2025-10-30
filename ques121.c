//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include <stdio.h>

int main() {
    int length, breadth;
    
    // Read input
    scanf("%d %d", &length, &breadth);
    
    // Calculate area and perimeter
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    // Print results
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    
    return 0;
}
