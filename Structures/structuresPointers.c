#include<stdio.h>
typedef struct student{ // user defined data type
    int rno;
    float percent;
    char grade;
    } student;

void change(student* p){
    //(*p).grade='A';
    p->grade='A';
    p->percent=99;
    p->rno=100;
}
int main(){
    student s={76,70.7,'B'};
    printf("%c\n",s.grade);
    printf("%f\n",s.percent);
    printf("%d\n",s.rno);
    change(&s);
    printf("%c\n",s.grade);
    printf("%f\n",s.percent);
    printf("%d\n",s.rno);

    return 0;
}
