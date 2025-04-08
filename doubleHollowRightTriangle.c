#include <stdio.h>

int main() {
    int num; 
    scanf("%d", &num);
    if(num <= 1){
        printf("Shape Not Possible");
    } 
    else{
        for(int i = 1 ; i <= num ; i++){
            for( int j = 1 ; j<= i; j++){
                if(i == 1 || i == num || j == 1 || j == i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            for(int k = 2 ; k <= 2*(num-i+1)-1 ; k++){
                printf(" ");
            }
            for( int j = 1 ; j<= i; j++){
                if(i == 1 || i == num || j == 1 || j == i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}