#include <stdio.h>
#include<math.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num<=1){
        printf("Invalid input");
        return 0;
    }
    for (i=2;i<num;i++){
        if (n%i==0){
            isprime=0;
            break;
        }
    }
    if (isprime){
        printf("Prime\n");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}