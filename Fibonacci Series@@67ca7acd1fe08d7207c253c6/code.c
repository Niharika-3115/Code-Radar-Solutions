#include<stdio.h>
void fibonacciSeries(n){
    a=0,b=1,c;
    for(i=0;i<=n;i++){
        if(i==0){
            printf("%d",a);
        }
        else if(i==1){
            printf("%d",b);
        }
        else{
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
        }
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}