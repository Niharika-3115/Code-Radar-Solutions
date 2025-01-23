#include <stdio.h>

int main(){
    int x,y;
    scanf("%d" "%d", &x, &y);
    if (x>y) {
        printf("%d is greater than %d\n",x,y);
    }
    elif (x<y){
        printf("%d is less than %d\n",x,y);
    }
    else {
        printf("%d is equal to %d",x,y);
    }
    return 0;
}