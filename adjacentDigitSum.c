#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int t ;
  scanf("%d", &t);
  for(int i = 1 ; i <= t ; i++){
    
    int x , y;
    scanf("%d %d", &x, &y);
    if((x-y+1 >= 0) && ((x-y+1) % 9)== 0){
      printf("Yes");
    }
    else{
      printf("No");
    }
    printf("\n");
  }
  
  return 0;
}
