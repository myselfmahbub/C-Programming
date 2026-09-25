#include<stdio.h>
int main(){

    char arr[]={'M','a','h','b','u','b'};
    int n=sizeof(arr)/4;
    for(int i=0;i<6;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}