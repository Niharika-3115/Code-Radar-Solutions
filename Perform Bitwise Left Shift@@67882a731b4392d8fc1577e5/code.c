#include <stdio.h>

int main(){
    int num, num_shift,result;
    scanf("%d %d", &num, &num_shift);
    result= num << num_shift;
    printf("%d", result);
    return 0;
}
