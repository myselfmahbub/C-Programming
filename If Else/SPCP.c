#include<stdio.h>
int main(){
    int cp;
    printf("Enter cost price : ");
    scanf("%d",&cp);
 int sp;
    printf("Enter selling price : ");
    scanf("%d",&sp);

    if(sp==cp){  //dam jdi same thake
        printf("Same price");
    }
    if(sp>cp){  //Profit hole eta janabe
    printf("Profit");
}
    if(sp<cp){  //Loss hole eta janbe
        printf("Loss");

    }

    return 0;
} 