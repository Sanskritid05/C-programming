#include <stdio.h>

int main() {

    int num, find;
    scanf("%d",&num);
    find = (num & 1);
    if(find==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}