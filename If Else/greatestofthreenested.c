#include <stdio.h>
int main()
{
    int a,b,c;
   
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    printf("Enter Third Number : ");
    scanf("%d", &c);

    if(a>b){ // b is out of race
        if(a>c)
            printf("%d is greatest",a);
        else // a<c
            printf("%d is greatest",c);    
    }
    else{ // b>a  --> a is not greatest from another
        if(b>c)
            printf("%d is greatest",b);
        else //c>b
            printf("%d is greatest",c);

    }
    return 0;
}