//Boiler plate
#include<stdio.h>
int main(){
    typedef struct po{
        int rno;
        float percent;
        char grade;
    } student;

    student s1 = {76,70.7,'B'};
    student s2 = s1; // deep copy
    
    printf("%c\n",s1.grade); // Output: B
    printf("%c\n",s2.grade); // Output: B
    s2.grade = 'A';
    printf("%c\n",s1.grade); // Output: B (remains unchanged)
    printf("%c\n",s2.grade); // Output: A
    
    return 0;
}