#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    if(num <= 1){
        printf("Shape Not Possible");
    }
    else{
        for(int i = 1; i <= num ; i++){
        for(int j = 1 ; j <= num ; j++){
            if(i == 1 || i == num || j == 1 || j== num){
                printf("*");
                
            }
            else{
                printf("#");
            }
        }
        printf("\n");    
    }
    
    }
    return 0;
}