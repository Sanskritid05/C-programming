#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    for(int i = 1 ; i <= num ; i++){
        for(int k = 2; k <= num-i+1; k++){
            printf(" ");
        }
        for(int j = 1 ; j <= 2*i-1 ; j++){
            if(j<=i){
                printf("%d", j);
            }
            else{
                printf("%d", 2*i-j);
            }
        }
        printf("\n");
    }
    
    
    
    return 0;
}