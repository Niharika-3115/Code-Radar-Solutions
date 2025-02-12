#include<stdio.h>
int main(){
    int num1,num2,operation,sum,diff,prod,div;
    scanf("%d %d %ch",&num1,&num2,&operation);
    sum=num1+num2;
    diff=num1-num2;
    prod=num1*num2;
    div=num1/num2;
    if (operation='+'){
        printf("%d",sum);
    }
    else if(operation='-'){
        printf("%d",diff);
    }
    else if(operation='*'){
        printf("%d",prod);
    }
    else{
        printf("%d",div);
    }
    return 0;
}