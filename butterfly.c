#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    scanf("%d",&num);
    if(num <= 1){
        printf("Shape Not Possible");
    }
    else{
        for(int i = 1; i <= num; i++){
            for(int j = 1; j <= i; j++){
                printf("*");
            }
            for(int k = 2; k <= 2*(num-i+1)-1; k++){
                printf(" ");
            }
            for(int j = 1; j <= i; j++){
                printf("*");
            }
            printf("\n");   
        }
        for(int i = 2; i <= num; i++){
            for(int j = 1; j <= num-i+1; j++){
                printf("*");
            }
            for(int k = 2; k <= 2*i-1; k++){
                printf(" ");
            }
            for(int j = 1; j <= num-i+1; j++){
                printf("*");
            }
            printf("\n");   
        }
    }
    return 0;
}
