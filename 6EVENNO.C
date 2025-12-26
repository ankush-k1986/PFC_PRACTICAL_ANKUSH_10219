#include <stdio.h>
int main() { 
    // ANKUSH 10219     
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            continue;  
        }
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", n, sum);

    return 0;
}
/* Enter a number: 45
Sum of even numbers from 1 to 45 = 506 */