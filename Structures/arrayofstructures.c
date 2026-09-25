//Boiler PLate
#include<stdio.h>
int main(){
    typedef struct student{
        int rno;
        float percent;
        char grade;
    }student;
        student arr[3];
        arr[0].grade= 'A';
        arr[0].percent=93.4;
        arr[0].rno =9;

        student s={76,70.7,'B'};
        arr[1]=s;

        printf("%d\n",arr[1].rno);
        printf("%c\n",arr[1].grade);
        printf("%f",arr[1].percent);

    return 0;
}