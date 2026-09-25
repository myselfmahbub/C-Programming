#include<stdio.h>
#include<limits.h>
int main(){

    int arr[]={1,2,38,47,56,720};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]); 
    }
    printf("\n");
    //finding max
    int max= INT_MIN;
     for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
     }
    printf("%d is the largest\n",max);
    //finding second largest
    int smax= INT_MIN;
     for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i])
        smax=arr[i];
     }
    printf("%d is the second largest",smax);
}