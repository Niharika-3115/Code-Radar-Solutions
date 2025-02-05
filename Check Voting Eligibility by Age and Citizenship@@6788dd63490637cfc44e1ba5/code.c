#include <stdio.h>

int main(){
    int age,ship;
    scanf("%d %d",&age,&ship);
    if (age>=18 && ship==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}