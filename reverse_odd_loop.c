#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    for(int i = num*2; i >= 1; i -= 1){
        if(i%2 && i != 1)
            printf("%d ",i);     
        if(i == 1){
            printf("%d.",i);
        }
    }
    return 0;
}