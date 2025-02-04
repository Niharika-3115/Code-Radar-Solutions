#include <stdio.h>

int main(){
    char character;
    scanf("%ch",&character);
    if (ch<='A' && ch>='Z'){
        printf("Uppercase");
    }
    else if(ch<='a' && ch>='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}