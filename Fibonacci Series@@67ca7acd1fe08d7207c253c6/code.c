#include <stdio.h>
void fibonacciSeries(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(" %d", b);
        } else {
            int next = a + b;
            printf(" %d", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}
