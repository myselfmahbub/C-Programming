#include<stdio.h>
int main(){

    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    printf("%d %d\n",x,y);
    //swap
    int temp=x;
    x=y;
    y=temp;
    printf("%d %d\n",x,y);
    return 0;
}