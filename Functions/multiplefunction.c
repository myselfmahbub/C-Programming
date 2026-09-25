#include<stdio.h>
void england(){
    printf("You are in England\n");
    void japan();
    japan();
}
void japan(){
printf("You are in Japan\n");
}
int main(){
    printf("You are in main\n");
    void india();
    india();
}
void india(){
    printf("You are in India\n");
    england();
}