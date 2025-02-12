#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num==1){
        printf("Not Prime");
    }
    else {
        if(num>1){
            for(i=1;i<=num,i++){
            if (num%i==0){
                printf("Not Prime");
            }
            else{
                printf("Prime");
            }
        }
    }
    }
    return 0;
}