#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    if(num <= 1){
        printf("Shape Not Possible");
    }
    else{
        for(int i = 1 ; i <= num; i++){
           for(int j = 1 ; j <= i ; j++){
                if(i == 1|| j == 1 || j ==i){
                    printf("*");
                }
                else{
                   printf(" ");
                }
            }
            printf("\n");
        }
        for(int i = 2 ; i <= num; i++){
           for(int j = 1 ; j <= num-i+1 ; j++){
                if(j == 1 || j == num-i+1){
                    printf("*");
                }
                else{
                   printf(" ");
                }
            }
            printf("\n");
        } 
    }     
}