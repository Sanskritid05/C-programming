#include <stdio.h>
int prime(int num){
    if(num<2){
        return 0;
    }
    for(int i=2;i*i<=num;++i){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {

    int n,a=0,count=0;
    scanf("%d", &n);
    for(int i=3; i<=n;++i){
        if(prime(i)){
            if((i-a)==2){
                count++;
            }
            a=i;
        }
    }
    printf("%d",count);
    
    return 0;
}