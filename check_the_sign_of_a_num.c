#include <stdio.h>

int main() {

    int num, shift, cond;
    scanf("%d", &num);
    shift = num >> 31;
    cond = shift & 1;
    (cond == 0) ? printf("Positive") : printf("Negative"); 
    return 0;
}