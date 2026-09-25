#include<stdio.h>
typedef struct student{ // user defined data type
    int rno;
    float percent;
    char grade;
} student;
void print(student s){
    printf("%d\n",s.rno);
    printf("%f\n",s.percent);
    printf("%c\n",s.grade);
}
int main(){
    student s = {76,70.7,'B'};
    print(s);
    return 0;
}