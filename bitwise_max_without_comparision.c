#include <stdio.h>

int main() {
 
    int num1, num2, res, shift, cond;
    scanf("%d %d", &num1, &num2);
    res = num1 - num2;
    shift = res >> 31;
    cond = shift & 1;
   (cond == 0) ? printf("%d",num1) : printf("%d",num2);
    return 0;
}
#include <stdio.h>

int main() {

    int num, shift, cond;
    scanf("%d", &num);
    shift = num >> 31;
    cond = shift & 1;
    (cond == 0) ? printf("Positive") : printf("Negative"); 
    return 0;
}