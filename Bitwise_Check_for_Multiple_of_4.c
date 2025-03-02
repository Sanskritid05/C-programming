#include <stdio.h>

int main() {

    int num, result;
    scanf("%d", &num);
    result = 3 & num;
    if(!result)
        printf("Yes");
    else
        printf("No");
    return 0;
}