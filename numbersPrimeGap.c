#include <stdio.h>

int main(){
    
    int num, i, j, ext = 0 , ext2 = 0;
    scanf("%d", &num);
    
    // a prime before
    for(i = num-1 ; i > 1 ; i--){
        for(j = 2 ; j < num ; j++){
            if(i%j == 0){
                break;
            }
        }
        if(i == j){
            ext = j;
            break;
        }
    }
    // a prime after
    for(i = num+1 ; i < num*num ; i++){
        for(j = 2 ; j < num*num ; j++){
            if(i%j == 0){
                break;
            }
        }
        if(i == j){
            ext2 = j;
            break;
        }
    }
    int diff = ext2 - ext;
    printf("%d", diff);
    
    return 0;
}