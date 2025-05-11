#include <stdio.h>

// 1 digit prime number : 2 , 3 , 5 , 7  

int main() {

  int num, count = 0; 
  scanf("%d", &num);
  while(num != 0){
    
    int last = num % 10;
    
    if((last == 2) || (last == 3) || (last == 5) || (last == 7 )){
      count++;
    }
    
    num = num/10;
  }
  printf("%d", count);
  
  
  
  
  
  
  return 0;
}