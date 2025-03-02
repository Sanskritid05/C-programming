#include <stdio.h>

int main() {

    int num1, num2, shift1, shift2, cond1, cond2;
    scanf("%d %d", &num1, &num2);
    shift1 = num1 >> 31;
    shift2 = num2 >> 31;
    cond1  = (shift1 & 1);
    cond2  = (shift2 & 1);
    if(cond1 == 1 || cond2 == 1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    
    
    
    return 0;
}