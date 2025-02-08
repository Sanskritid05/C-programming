#include <stdio.h>

int main() {
    float income;
    scanf("%f",&income);
    if(income<=0){
        printf("INVALID");
    }
    if(income>0 && income<=250000){
        printf("0.00");
    }
    else if(income> 250000 && income<=500000){
        income = income-250000;
        float tax= 0.05*income ;
        printf("%.2f",tax);
    }
    else if(income>500000 && income<=1000000){
        income = income-500000;
        float tax= 0.05*250000 + 0.2*income;
        printf("%.2f",tax);
    }
    else{
        if(income>1000000){
            income = income-1000000;
            float tax= 0.05*250000 + 0.2*500000 + 0.3*income ;
            printf("%.2f",tax);    
        }  
    }
    return 0;
}