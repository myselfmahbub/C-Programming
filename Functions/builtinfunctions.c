#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    printf("Enter Base : ");
    scanf("%f", &a);
    int b;
    printf("Enter Power : ");
    scanf("%d", &b);
    float p = pow(a, b);
    printf("%f raised to the power %d is %f", a, b, p);
} 
