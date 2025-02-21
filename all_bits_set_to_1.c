#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if((((num+1) & num) == 0) || num== -1){
        printf("Yes");
    }
    else{
       printf("No"); 
    }
        
}