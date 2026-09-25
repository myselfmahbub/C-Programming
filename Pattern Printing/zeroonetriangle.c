#include <stdio.h>
int main(){

    int n;
    printf("Enter side of square : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){ // Rows
        
        for (int j = 1; j <= i; j++) // Coloumns
        {
           if((i+j)%2==0)
            printf("%d ", 1);
            else printf("%d ", 0);
        }
        printf("\n");
    }

    return 0;
}