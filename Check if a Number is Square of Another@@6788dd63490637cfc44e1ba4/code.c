#include <stdio.h>
#include <math.h>

int main(){
    int num,squareroot;
    scanf("%d",&num);
    squareroot=sqrt(num);
    if (squareroot*squareroot==num){
        print("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}