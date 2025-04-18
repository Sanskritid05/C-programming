#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num;
    scanf("%d", &num);
    if(num <= 1){
        printf("Shape Not Possible");
    }
    for(int i = 1 ; i <= num; i++){
        for(int j = 1 ; j <= i ; j++){
            if(i%2 == 1){
                if(j%2 == 1){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            if(i%2 == 0){
                if(j%2 == 0){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
        }
        printf("\n");
    }
    
    
    return 0;
}
