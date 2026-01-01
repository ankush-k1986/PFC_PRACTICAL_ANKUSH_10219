#include <stdio.h>

int main() {
 // ANKUSH 10219
 
    int arr[5] = {4, 3, 2, 1, 5};
    int temp;
    int i;

    for (i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    printf("Reversed array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// OUTPUT
// Reversed array:
// 5 1 2 3 4