#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);
    if (year<=0){
        printf("The given year %d is Invalid year.", year);
        return 0;
    }
    else if(year%100!=0 && year%4==0){
        printf("Yes, %d is a leap year.",year);
    }
     else if(year%400==0){
            printf("Yes, %d is a leap year.",year);    
      }
    
    else{
        printf("No, %d is not a leap year.",year);
    }
}