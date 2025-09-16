#include <stdio.h>

int main() {
    int i, k;
    for(i = 0; i <= 10; i++) {
        k = i * 19;
        printf(" %d*19=%d\n", k);  // Added newline for readability
    }

    return 0;
}
