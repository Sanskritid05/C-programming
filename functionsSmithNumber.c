#include <stdio.h>

int is_smith_number(int n) {
    // Implement this function
  int sum1 = 0,sum2 = 0, factor = 2 ; 
    int num1 = n;
    int num2 = n;
    
    while(num1 != 0){
        int last = num1%10;
        sum1 += last;
        num1 = num1/10;
    }
    while(num2 > 1){
        if(num2%factor == 0){
            sum2+= factor;
            num2 = num2/factor;
        }
        else{
            factor += 1;
        }
    }
    // printf("%d\n", sum2);
    if(sum1 == sum2){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}