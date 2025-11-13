//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/


#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m][n];

    // Input matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Perform diagonal traversal
    for (int k = 0; k < m + n - 1; k++) {
        if (k % 2 == 0) {
            // Traverse upward (bottom-left to top-right)
            for (int i = (k < m ? k : m - 1); i >= 0; i--) {
                int j = k - i;
                if (j < n)
                    printf("%d ", a[i][j]);
            }
        } else {
            // Traverse downward (top-right to bottom-left)
            for (int j = (k < n ? k : n - 1); j >= 0; j--) {
                int i = k - j;
                if (i < m)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}
