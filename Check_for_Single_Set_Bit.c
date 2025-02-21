#include <stdio.h>

int main() {
    
    int num, cond;
    scanf("%d",&num);
    cond = ((num)^(num+1));
    if ((num == 1) || ((num > 0) && (cond == 1)) ){
        printf("1");
    }
    else{
        printf("-1");
    }
    
    
    
    return 0;
}