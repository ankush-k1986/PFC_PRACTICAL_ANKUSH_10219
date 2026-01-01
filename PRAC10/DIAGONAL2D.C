#include <stdio.h>

int main() {
// ANKUSH 10219
    int n, sum = 0;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n; i++) {
        sum += arr[i][i];
    }
    printf("\nSum of diagonal elements = %d", sum);
    return 0;
}
/* OUTPUT
Enter the order of matrix: 3
Enter matrix elements:
1
2
3
4
5
6
7
8
9

Matrix is:
   1   2   3
   4   5   6
   7   8   9

Sum of diagonal elements = 15*/