#include <stdio.h>
int main(){
    int month, year;
    scanf("%d\n%d", &month, &year);
    if(month <= 0 || month > 12 || year < 0 || year > 9999 )
        printf("Invalid Month\nInvalid Year");
    else if((month > 0 && month <= 12) && (year >= 0 && year <= 9999)){
        if(month == 2) {
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                printf("29");
            }
            else{
                printf("28");
            }
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            printf("31");
        }
        else{
            printf("30");
        }
    }
        
    return 0;    
}