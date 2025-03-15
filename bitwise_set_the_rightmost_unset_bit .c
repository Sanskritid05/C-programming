#include <stdio.h>

int main() {

    int num, cond1, cond2;
    scanf("%d", &num);
    cond1 = num |(num+2);
    cond2 = num |1;
    if(num%2 ==0){
        printf("%d", cond2);
    }
    else{
        printf("%d", cond1);
    }
    
    return 0;
}