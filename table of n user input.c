#include <stdio.h>

int main() {
    int i, k, n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i = 1; i <= 10; i++) {
        k = i * n;
        printf(" %d*%d=%d\n", i,n,k);  // Added newline for readability
    }

    return 0;
}
