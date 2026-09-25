#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter First side : ");
    scanf("%d", &a);
    printf("Enter Second side : ");
    scanf("%d", &b);
    printf("Enter Third side : ");
    scanf("%d", &c);

    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
    return 0;
}
