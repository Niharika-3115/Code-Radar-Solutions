#include<stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);

    for(i=2;i<=n;i++){
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