#include <stdio.h>

int main() {

    int num, cond;
    scanf("%d", &num);
    cond = (((num << 1)+num)+(num >> 1));
    printf("%d",cond);
    
    return 0;
}