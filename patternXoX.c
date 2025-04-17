#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    if(num<=1){
        printf("Shape Not Possible");
    }
    else if(num%2 == 0){
        for(int i = 1; i <= num+1; i++){
            for(int j = 1 ; j <= num+1; j++){
                if(j == num/2+1 || i == num/2+1){
                    printf("x");
                }
                else{
                    printf("o");
                }
            }
            printf("\n");
        }
    }
    else if(num%2 == 1){
        for(int i = 1; i <= num; i++){
            for(int j = 1 ; j <= num; j++){
                if(j == num/2+1 || i == num/2+1){
                    printf("x");
                }
                else{
                    printf("o");
                }
            }
            printf("\n");
        }
    }
        
}