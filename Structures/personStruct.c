// Boiler PLate
#include <stdio.h>
#include <string.h>
int main(){
    typedef struct person{
        char name[20];
        int salary;
        int age;
        
    }person;
    person p1; 
    strcpy(p1.name, "Mahbub");
    p1.age=21;
    p1.salary=100000;

    person p2={"Raghav",20000,30};
    
    printf("%s\n",p1.name);
    printf("%d\n",p2.age);

    return 0;
}