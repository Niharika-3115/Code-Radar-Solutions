#include <stdio.h>
int main(){
    int num1,num2,sum,diff,prod,div;
    char operation;
    scanf("%d %d %c",&num1,&num2,&operation);
    sum=num1+num2;
    diff=num1-num2;
    prod=num1*num2;
    div=num1/num2;
    if (operation=='+'){
        printf("%d",sum);
    }
    else if(operation=='-'){
        printf("%d",diff);
    }
    else if(operation=='*'){
        printf("%d",prod);
    }
    else if(operation=='/'){
        if (num2==0){
            printf("Error");
        }
        else{
            printf("%d",div);
        }
    }
    else{
        printf("Error");
    }
    return 0;
}