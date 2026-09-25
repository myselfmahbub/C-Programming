#include<stdio.h>
int main(){
int a,b; //a>b
printf("Enter dividend : ");
scanf("%d",&a);
printf("Enter divisor : ");
scanf("%d",&b);
// int q = a/b;
// int r = a - b*q ; // divisor * Quotient + Remainder = Dividend 
// printf("The Remainder when %d is divided bt %d is : %d",a,b,r);
int r = a % b;
printf("The Remainder when %d is divided bt %d is : %d",a,b,r);
return 0;       
}