#include <stdio.h>

int main() {

    float n;
    float discount;
    float amount = 0;
    scanf("%f",&n);
    if(n<0){
        printf("Invalid Input!");
        return 0;
    }
    else if (n <= 100){
        amount+= 5 * 100;
        if(amount<=1200){
            discount = amount/10;
            amount = amount - discount;
            printf("The electricity bill is: %.2f.",amount);
        }
        else{
        printf("The electricity bill is: %.2f.",amount);
        }
    }
    else if(n>100 && n<= 300){
        amount+= 500 + (n-100)*7;
        if(amount<=1200){
            discount = amount/10;
            amount = amount - discount;
            printf("The electricity bill is: %.2f.",amount);
        }
        else{
        printf("The electricity bill is: %.2f.",amount);
        }
    }
    else{
        amount+= 1900 + (n-300)*10;
        if(amount<=1200){
            discount = amount/10;
            amount = amount - discount;
            printf("The electricity bill is: %.2f.",amount);
        }
        else{
        printf("The electricity bill is: %.2f.",amount);
        }
    }
    return 0;
}