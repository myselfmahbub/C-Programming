//Boiler PLate
#include<stdio.h>
int main(){
    struct student{
        int rno;
        float percent;
        char grade;
    };
        struct student mahbub;//declaration
        mahbub.grade= 'A';
        mahbub.rno =88;
        mahbub.percent=95.4;

        struct student papa;//declaration
        papa.grade= 'A';
        papa.rno =88;
        papa.percent=95.4;

        printf("%f",mahbub.percent);

    return 0;
}