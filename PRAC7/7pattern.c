#include <stdio.h>
int main() {           
    // ANKUSH 10219
    int n;
    printf("Enter No. of lines : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
/*
Enter No. of lines : 5
A
AB
ABC
ABCD
ABCDE
*/