#include<stdio.h>
#include<limits.h>
int main(){

    int arr[]={-5,-8,-1,-12,-13,-7,-5,-2,8,};
    int n=sizeof(arr)/4;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(mx<arr[i]) mx=arr[i];
    }
    printf("%d ",mx);
}