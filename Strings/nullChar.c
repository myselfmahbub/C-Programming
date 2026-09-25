#include<stdio.h>
int main(){

    char arr[]={'M','a','h','b','u','b','\0'};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
    printf("%d",n);
}