#include <stdio.h>

int main() {
  
  int num;
  scanf("%d", &num);
  for(int i = 1 ; i <= num ; i++){
    for(int j = 1 ; j <= i ; j++){
      if(i % 2 == 1){
        printf("%d ", 2*j-1);
      }
      else{
        printf("%d ", 2*j);
      }
    }
    printf("\n");
  }
  
  
  return 0;
}