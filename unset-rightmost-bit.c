#include <stdio.h>

int main() {

    int num1, num2, cond;
    scanf("%d", &num1);
    num2 = (num1 - 1);
    cond = (num1 & num2);
    printf("%d",cond);
    return 0;
}