#include <stdio.h>
int main(){

    int n;
    printf("Enter side of square : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){ // Rows
        for (int j = 1; j <= 2*n-1; j+=2) // Coloumns
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}