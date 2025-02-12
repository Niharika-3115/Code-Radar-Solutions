#include <stdio.h>
int main(){
    int num1,num2;
    char operation;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&operation);
    if (operation=='+'){
        printf("%d",num1+num2);
    }
    else if(operation=='-'){
        printf("%d",num1-num2);
    }
    else if(operation=='*'){
        printf("%d",num1*num2);
    }
    else if(operation=='/'){
        if (num2==0){
            printf("error");
        }
        else{
            printf("%d",num1/num2);
        }
    }
    else{
        printf("error");
    }
    return 0;
}