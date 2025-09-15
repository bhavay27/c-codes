#include <stdio.h>

int main() {
    int l,b,h;
    printf("enter value of l: ");
    scanf("%d",&l);
    printf("enter value of b: ");
    scanf("%d",&b);
    printf("enter value of h: ");
    scanf("%d",&h);
    if(l+b>h){
        printf("yes it part of triangle.");
    }else if(b+h>l){
        printf("yes it part of triangle.");
    }else if(h+l>b){
        printf("yes it part of triangle.");
    }else{
        printf("no it is not a part of triangle.");
    }
    
    return 0;
}
