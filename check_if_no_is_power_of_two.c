#include <stdio.h>

int main() {

    int num, cond;
    scanf("%d", &num);
    cond = (num & (num - 1));
    if((num > 0) && (cond == 0)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}