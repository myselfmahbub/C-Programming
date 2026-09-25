#include <stdio.h>
int main()
{

    int m;
    printf("Enter side of square : ");
    scanf("%d", &m);
    
    for (int i = 1; i <= m; i++)//rows
    {
        for (int j = 1; j <= i; j++)//coloumns
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

    return 0;
}