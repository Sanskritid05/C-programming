#include <stdio.h>

int main(){
    
    int a[] = {10, 10 , 20 ,30 ,40 , 40};
    int size = sizeof(a)/sizeof(a[0]) ;
    printf("The Lonely Elements : ") ;
    for(int i = 0 ; i < size ; i++){
        int count = 0;
        for(int j = 0 ; j < size ; j++){
            if(a[i] == a[j]){
                ++count ;
            }
        }
        if(count == 1){
            printf("%d " , a[i]) ;
        }
    }
}
