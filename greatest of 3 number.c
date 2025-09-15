#include <stdio.h>

int main() {
   int a,b,c;
   printf("enter value of a:");
   scanf("%d",&a);
   printf("enter value of b:");
   scanf("%d",&b);
   printf("enter value of c:");
   scanf("%d",&c);
   if(a>b && a>c){
       printf("a is greatest");
   }
   else if(b>a && b>c){
       printf("b is greatest");
   }
   else if(c>a && c>a){
       printf("c is greatest.");
   }
   else if(a==b || a>c){
       printf("a is eual b but greater than c ");
   }
   else if(a==c || a>b){
       printf("a is eual c but greater than b ");
   }
   else if(b==c || b>c){
       printf("b is eual c but greater than a ");
   }
   else if(a=b){
       printf("all are equal");
   }
   else{
       printf("default");
   }
    return 0;
}
