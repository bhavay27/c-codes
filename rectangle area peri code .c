#include <stdio.h>

int main() {
    float l,b,area,perimeter;
    printf("enter value of l:");
    scanf("%f",&l);
    printf("enter value of b:");
    scanf("%f",&b);
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter){
        printf("area is greater than perimeter");
    }else{
        printf("area is less than perimeter");
    }
    return 0;
}
