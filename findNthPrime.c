#include <stdio.h>

int main(){
  int n , count = 0 , num = 1;
  scanf( "%d", &n);
  
  while(count < n){
    num++ ;
    int prime = 1 ;
    for(int i = 2 ; i*i <= num ; i++){
      if(num % i == 0){
        prime = 0 ;
        break ;
      }
    }
    if(prime) count++ ;
  }
  printf("%d", num);

  }
