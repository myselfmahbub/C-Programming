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
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}