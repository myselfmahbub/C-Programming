#include<stdio.h>
int main(){

    char str[50];
    //scanf("%s",str);  this has one issue
    //printf("%s",str);
    gets(str);//it can input
    puts(str);
}