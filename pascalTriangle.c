#include <stdio.h>

int main()
{  int n ;
   scanf("%d", &n) ;
   for(int i = 0; i < n ; i++){
        for(int k = 0 ; k < n - i-1 ; k++){
            printf(" ");
        }
        int res = 1 ; 
        for(int j = 0 ; j <= i ; j++){
            if(j > 0){
                res = res *( i - j + 1) / j;
            }
            printf("%d " , res) ;
        }
        printf("\n");
       
   }
    return 0;
}