#include<stdio.h>
int main(){
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth : ");
    scanf("%d",&b);
   int a =l*b;
   int p = 2*(l+b);

   if(a>p){  // Sir kintu total ta koraini ami nije theke ota thik korechi
    printf("Area is greater than perimeter : ");
    printf("%d",a);
   }
   if(a<p){
    printf("Area is less than perimeter : ");
    printf("%d",p);
   }

    return 0;
}