#include<stdio.h>
int main(){

int n;// dabba ban gaya
printf("Enter a number : ");
scanf("%d",&n);// dabbe me value dal diii, n=7 

// if (n%2==0)// Even Condition
// {
//    printf("Even number");
// }
// if (n%2!=0)//Odd Condition
// {
//    printf("Odd number");
// }

if(n%2==0){
   printf("Even number");
}
else{
   printf("Odd number");
}

    return 0;
}