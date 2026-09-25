#include<stdio.h>
int main(){

int n;
printf("Enter a number : ");
scanf("%d",&n);
n%2==0 ? printf("Even Number") : printf("Odd Number");
//Ternary Operator :-
//Expression1 ? Expression2 : Expression3; (Eta likhar rules)
//ei operator oto use hoina
    return 0;
}