#include<stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);
    if(num<2){
        printf("Not Prime");
        return 0;
    }

    for(i=2;i<=num;i++){
        if(num%i==0)
        break;
    }
    if(i==num){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}