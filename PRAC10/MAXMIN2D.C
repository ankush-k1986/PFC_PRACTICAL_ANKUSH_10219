#include <stdio.h>

int main() {
    // ANKUSH 10219

    int rows, cols;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nMaximum element = %d", max);
    printf("\nMinimum element = %d", min);

    return 0;
}
/* OUTPUT 
Enter number of rows and columns: 2
2
Enter elements of the matrix:
15
153
315
16

Matrix:
15      153
315     16

Maximum element = 315
Minimum element = 15
*/