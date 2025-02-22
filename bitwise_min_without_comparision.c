#include <stdio.h>

int main() {

    int num1, num2, res, shift;
    scanf("%d %d", &num1, &num2);
    res = num1 - num2;
    shift = res >> 31;
    int cond = shift & 1;
    (cond == 0) ? printf("%d", num2): printf("%d", num1);
    
    
    return 0;
}