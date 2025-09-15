#include <stdio.h>

int main() {
    float x;
    printf("enter a number:");
    scanf("%f",&x);
    if(x>3 && x<5){
        printf("number lies in range");
    }else{
        printf("number doesnot");
    }
    return 0;
}
