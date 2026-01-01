#include <stdio.h>

int main() {
// ANKUSH 10219
    int n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
// OUTPUT
// Enter number of elements: 4
// Enter 4 elements:
// 232
// 518
// 235
// 23
// Sum of even elements = 750