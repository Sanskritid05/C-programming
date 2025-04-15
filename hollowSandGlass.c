#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num <= 1){
        printf("Shape Not Possible");
    }
    else{
        for(int i = 1; i <= num ; i++){
            for(int k = 2 ; k <= i ; k++){
                printf(" ");
            }
            for(int j = 1 ; j <= 2*(num-i+1)-1 ; j++){
                if(((i == 1) && (j%2==1))||j == 1 || j == 2*(num-i+1)-1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
        for(int i = 2; i <= num ; i++){
            for(int k = 2 ; k <= num-i+1 ; k++){
                printf(" ");
            }
            for(int j = 1 ; j <= 2*i-1 ; j++){
                if(((i == num) && (j%2==1))||j == 1|| j == 2*i-1){
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
