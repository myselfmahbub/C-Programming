#include <stdio.h>
int main(){

    int n;
    printf("Enter side of square : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){ // Rows
        int a=1;
        for (int j = 1; j <= i; j++) // Coloumns
        {
            printf("%d ", a);
            a=a+2;
        }
        printf("\n");
    }

    return 0;
}