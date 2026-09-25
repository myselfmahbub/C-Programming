#include<stdio.h>
typedef union student{ // user defined data type
    int rno;// 4  bytes
    float percent;// 4 bytes
    char grade;//2 bytes
} student;

int main(){
    student s={76,70.7,'B'};
    printf("%c\n",s.grade);
    printf("%f\n",s.percent);
    printf("%d\n",s.rno);
    
    return 0;
}
