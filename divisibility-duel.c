#include <stdio.h>
//If X is divisible by Y, the output should be "Y triumphs over X!".
//If X is divisible by Z, the output should be "Z outsmarts X!".
//If X is divisible by both Y and Z, the output should be "X defeats all!".
//If X is not divisible by either Y or Z, the output should be "X remains undefeated!".
int main() {
    int x, y, z;
    scanf("%d %d %d",&x,&y,&z);
    if((x%y==0) & (x%z==0)){
        printf("X defeats all!");   
    }
    else if(x%y==0){
       printf("Y triumphs over X!"); 
    }
     else if(x%z==0){
       printf("Z outsmarts X!"); 
    }
    else{
        printf("X remains undefeated!");
    }
    return 0;
}