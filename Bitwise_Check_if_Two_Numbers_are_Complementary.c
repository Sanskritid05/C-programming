#include <stdio.h>

int main() {

    int num1, num2, cond;
    scanf("%d %d", &num1, &num2);
    cond = num1 | (num2);
    if(cond == -1)
        printf("YES");
    else
        printf("NO");
    return 0;
}