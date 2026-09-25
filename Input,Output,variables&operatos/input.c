#include<stdio.h>
int main(){
int x;
printf("Enter first number\n");
scanf("%d",&x);//user will be 'x' a value.
int y;
printf("Enter second number\n");
scanf("%d",&y);
int sum = x+y;
printf("sum of the numbers that you gave is %d",sum);

return 0;    
}