#include <stdio.h>

int main() {

    int num, a, d;
    scanf("%d\n%d %d", &num, &a, &d);
    for(int i = 0 ; i < num ; i++){
        printf("%d ",a+i*d);
    }
return 0;
}