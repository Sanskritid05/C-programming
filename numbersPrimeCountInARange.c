#include <stdio.h>

int main() {
  int i , j , num1, num2;
  scanf("%d %d", &num1,&num2);
  int count = 0;
  for(i = num1 ; i <= num2 ; i++){
    for(j = 2 ; j <= i ; j++){
      if(i%j == 0){
        break;
      }
    }
    if(i == j){
      count++;
    }
  }
  printf("%d\n", count);
  
  for(i = num1 ; i <= num2 ; i++){
    for(j = 2 ; j <= i ; j++){
      if(i%j == 0){
        break;
      }
    }
    if(i == j){
      printf("%d ", i);
    }
  }
  
  
 
    return 0;
}