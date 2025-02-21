#include <stdio.h>

int main() {

    int num1, num2, diff, res;
    scanf("%d %d", &num1, &num2);
    diff = num1 ^ num2;
    res = (diff & (diff - 1)) == 0;
    if(res){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
