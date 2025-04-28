#include <stdio.h>

int main() {

  int n , sum = 0;
  scanf("%d", &n);
  
  int num = 1;
  while(n > 0){
    num++;
    int prime = 1 ;
    for(int i = 2 ; i*i <= num ; i++){
      if(num%i == 0){
        prime = 0;
        break ;
      }
    }if(prime){
    sum+= num ;
    --n ;
    }
  }
  printf("%d", sum);
    
    return 0;
}