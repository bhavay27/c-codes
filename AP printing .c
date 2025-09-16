#include <stdio.h>

int main() {
    int T, a, n, d, i;

    printf("Enter the first term (a): ");
    scanf("%d", &a);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        T = a + (i - 1) * d;
        printf("Term %d: %d\n", i, T);
    }

    return 0;
}
