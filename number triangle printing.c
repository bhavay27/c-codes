#include <stdio.h>
// IMPORTANT 
// number of lines = no. of rows= inner loop
// number of stars in a row= no. of coloumns=outer loop
int main(){
    int i,j,n,m;
    printf("no.of rows:");
    scanf("%d",&n);
    printf("no.of coloumns:");
    scanf("%d",&m);
    for(i=0;i<=m;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
