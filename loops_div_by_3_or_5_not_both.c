#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);
    for(int i =1; i <= num ; i++){
        if( ((i % 3 == 0)||(i % 5 == 0)) && (!((i % 3 == 0)&&(i % 5 == 0))) ) {
            printf("%d ", i);
        }
    }
    return 0;
}
