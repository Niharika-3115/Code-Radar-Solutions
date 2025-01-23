#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    if (x>y) {
        print("%d is greater than %d",x,y);
    }
    elif (x<y){
        print("%d is less than %d",x,y);
    }
    else {
        print("%d is equal to %d",x,y)
    }
    return 0;
}