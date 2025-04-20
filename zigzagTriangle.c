#include <stdio.h>

int main(){
  int num ;
  scanf("%d", &num);
  for(int i = 1 ; i <= num ; i++){
    int prev = i ;
    for(int j = 1 ; j <= i ; j++){
      if(j == 1){
        printf("%d ", i);
      }
      else if(j%2 == 0){
        prev += 2*num - 2*i + 1;
        printf("%d ", prev);
      }
      else{
        prev += 2*(i-j+1);
        printf("%d ", prev);
      }
    }
    printf("\n");
  }
}
    
    