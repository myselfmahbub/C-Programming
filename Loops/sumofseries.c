#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum +i;

    }
    printf("The sum is : %d",sum);
    return 0;
}
//Take n as input and find the sum of numbers from 1 to n