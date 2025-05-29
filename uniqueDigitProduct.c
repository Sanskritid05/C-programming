#include <stdio.h>

int find_unique_digit_product(int n) {
  int product = 1 ,
  current_digit , temp , is_distinct;
  
  if(n < 0){
    n = -n ;
  }
  //extract current digit
  while(n != 0){
    current_digit = n % 10 ;
    temp = n / 10 ; 
    is_distinct = 1 ; 
    //ckeck the current_digit with temp % 10
    while(temp != 0){
      if(temp % 10 == current_digit){
        is_distinct = 0 ;
        break ;
      }
      else{
        temp = temp / 10;
      }
    }
    
    if(is_distinct){
      product *= current_digit;
    }
    n = n / 10 ;  
  }
  return product;
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}



