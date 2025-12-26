#include <stdio.h>
// ANKUSH 10219
void printTriangle(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int n;
    printf("Enter the height of the triangle: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}
/*ANKUSH 10219
Enter the height of the triangle: 5
*
**
***
****
*****
*/