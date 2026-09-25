#include <stdio.h>
int main(){

    int n;
    printf("Enter side of square : ");
    scanf("%d",&n);
    int a=1;
    for (int i = 1; i <= n; i++){ // Rows
     
        for (int j = 1; j <= i; j++) // Coloumns
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}