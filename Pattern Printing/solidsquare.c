#include <stdio.h>
int main()
{

    int m;
    printf("Enter side of square : ");
    scanf("%d", &m);
    // int n;
    // printf("Enter no of coloumns : ");
    // scanf("%d", &n);
    for (int i = 1; i <= m; i++)//rows
    {
        for (int i = 1; i <= m; i++)//coloumns
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}