#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    int skip = 0;
    for(int i = num; i >=1; i--){
        if(num % i == 0){
            if(skip % 2 == 0){
                if(skip > 0){
                    printf(" ");  
                }
                printf("%d",i);
            }
            skip++;
        }  
    }
    printf(".\n");
    
    
    return 0;
}