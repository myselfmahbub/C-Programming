#include<stdio.h>
int main(){

    int x=90;
    int* z=&x;
    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",z);
    printf("%d\n",&z);
    printf("%d\n",*z);

    printf("\n\n");




    return 0;
}