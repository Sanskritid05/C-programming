#include <stdio.h>

int main() {
    
    int num, count;
    scanf("%d", &num);
    num = num & 15;
    count = ((num & 1)+(num>>1 & 1)+(num>>2 & 1)+(num>>3 & 1));
    printf("%d", count);
    
    
    
    return 0;
}