#include <stdio.h>

int main() {

    int num1 , num2;
    scanf("%d %d", &num1, &num2);
    for ( int i = 1 ; i <= num1 ; i++){
        printf("%d ", i * num2);
    }
return 0;
}