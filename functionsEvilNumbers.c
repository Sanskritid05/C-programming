#include <stdio.h>

int is_evil_number(int n) {
  int count = 0 ;
    while(n != 0){
      if(n % 2 == 1){
        count ++;
      }
      n = n/2 ;
    }
  if(count % 2){ //odd --> 0
    return 0;
  }
  else{
    return 1 ; // even --> 1
  }
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}