#include <stdio.h>

int main() {
    // ANKUSH 10219
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
/* OUTPUT 
Enter number of rows and columns: 2
2
Enter elements of the matrix:
4
6
9
7
Sum of row 1 = 10
Sum of row 2 = 16
*/