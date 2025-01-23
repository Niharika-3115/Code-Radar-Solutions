#include <stdio.h>

int main(){
    int x,y;
    char True[20],False[20];
    printf("");
    scanf("%d %d", &x, &y);
    if (x>y) {
        printf("True %s",True);
    } else {
        printf("False %s",False);
    }
    return 0;
}