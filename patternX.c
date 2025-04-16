#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    if(num <=1){
        printf("Shape Not Possible");
    }
    else if(num%2==0){
        num+=1;
    }
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(j == i || j==num-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}