#include <stdio.h>

int main(){
    char command;
    scanf("%c",&command);
    if (command=='R'){
            printf("Stop");
    }
    else if (command=='G'){
        printf("Go");
    }
    else if(command=='Y'){
        printf("Slow Down");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}