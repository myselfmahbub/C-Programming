#include<stdio.h>
int main(){

    //Method 1 of Printing
    char arr[]="Mahbub";
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
    // printf("%s",arr);[Method 2 of Printing]
    printf("\n");
    printf("%d",n);
}