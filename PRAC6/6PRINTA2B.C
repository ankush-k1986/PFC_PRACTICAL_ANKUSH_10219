#include <stdio.h>
int main() {     
    // ANKUSH 10219
    int a, b;

    printf("Enter the first number : ");
    scanf("%d", &a);

    printf("Enter the second number : ");
    scanf("%d", &b);

    printf("Numbers from %d to %d: ", a, b);
    for(int i = a; i <= b; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
   }
// OUTPUT 
// Enter the first number : 12
// Enter the second number : 18
// Numbers from 12 to 18: 12 13 14 15 16 17 18