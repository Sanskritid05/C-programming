#include <stdio.h>

int main() {

    int num, i, opp;
    scanf("%d\n%d", &num, &i);
    opp = (num ^(1<<i));
    printf("%d", opp);
    
    return 0;
}