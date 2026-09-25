#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    printf("Enter Third Number : ");
    scanf("%d", &c);

    if (a < 0)
    {
        printf("Sorry '%d' is 'Negative integer' and also ", a);
    }
    if (b < 0)
    {
        printf("Sorry '%d' is 'Negative integer' and also ", b);
    }
    if (c < 0)
    {
        printf("Sorry '%d' is 'Negative integer' and also ", c);
    }

    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    if (c > a && c > b)
    {
        printf("%d is greatest", c);
    }

    return 0;
}