#include <stdio.h>
// IMPORTANT 
// number of lines = no. of rows.
// number of stars in a row= no. of coloumns.
int main() {
    int n,i,j;
    printf("enter number n:");
    scanf("%d",&n);
    for(int i=1;i<=3;i++){
    for(int i=0;i<=n;i++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
