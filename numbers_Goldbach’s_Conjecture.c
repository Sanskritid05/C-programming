#include <stdio.h>

int main()
{
  int num ;
  scanf("%d", &num);
  if(num % 2 == 0){
    int i, j,s;
    for(i = 1 ; i <= num ; i++) {
      for(j = 2 ; j <= i ; j++) {
        if(i%j == 0) {
          break;
        }
      }
      if(i == j) {
        int p = j;
        int q = num-p;
        for(s = 2 ; s < q ; s++){
          if(q%s == 0){
            break;
          }
        }
        if(s == q) {
          if(p+q == num){
            printf("%d %d", p , q);
            break;
          }
          else{
            printf("No Solution");
          }
        }
      }
    }
  }
  else{
   printf("No Solution");
  }
  return 0;
}