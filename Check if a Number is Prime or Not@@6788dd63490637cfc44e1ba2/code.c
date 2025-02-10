#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
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