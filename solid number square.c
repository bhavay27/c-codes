#include <stdio.h>
// IMPORTANT 
// number of lines = no. of rows= inner loop
// number of stars in a row= no. of coloumns=outer loop
int main() {
    int n,i,j,m;
    printf("enter number of rows :");
    scanf("%d",&n);
    printf("enter number of coloumns :");
    scanf("%d",&m);
   for(int i=1;i<=m;i++){
       for(int j=1;j<=n;j++){
           printf("%d ",j);
       }
       printf("\n");
   }
    return 0;
}
