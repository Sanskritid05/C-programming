#include <stdio.h>
int main(){
  int n ;
  scanf("%d", &n);
    for(int i = 1 ; i <= n ; i++){
        int x = i ; 
        printf("%d ", x);
        for(int j = 2 ; j <= i ; j++){
            x += n-j+1;
            printf("%d ", x);
        }
        printf("\n");
    }
}