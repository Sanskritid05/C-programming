#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    for (int i = 2 ; i <= num ; i += 2){
        printf("%d ", i);
    }
    return 0;
}