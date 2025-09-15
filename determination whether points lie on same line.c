#include <stdio.h>

int main() {
double x1,x2,x3,y1,y2,y3,m1,m2;
printf("input value of x1:");
scanf("%lf",&x1);
printf("input value of x2:");
scanf("%lf",&x2);
printf("input value of x3:");
scanf("%lf",&x3);
printf("input value of y1:");
scanf("%lf",&y1);
printf("input value of y2:");
scanf("%lf",&y2);
printf("input value of y3:");
scanf("%lf",&y3);
if(m1=m2){
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    printf("points lie on same line.");
}else{
    printf("point do not line on same line");
}


    return 0;
}
