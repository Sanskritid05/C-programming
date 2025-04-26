#include <stdio.h>
#include <math.h>

int isPrime(int n);
int main() {
  int n ;
  scanf("%d", &n);
  if (isPrime(n)){
    printf("%d", n);
    return 0;
  }
  for(int i = 1 ; ; i++){
    if((n-i) > 1 && isPrime(n-i)){
      printf("%d", n-i);
      break;
    }
    if(isPrime(n+i)){
      printf("%d", n+i);
      break;
    }
  }
 
}
int isPrime(int n){
  if(n < 2) return 0 ;
  for(int i = 2 ; i <= sqrt(n) ; i++){
    if(n % i == 0)
      return 0;
    
  } return 1;
}
