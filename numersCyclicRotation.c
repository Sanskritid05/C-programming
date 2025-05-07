#include <stdio.h>

int main() {
  int num, original; 
  scanf("%d", &num);
  
  int toggle = 0;
  
  original = num ;
  
  while(toggle != original){
    int last = num % 10;
    last = last*1000;
    int new = num/10;
    new = new +last ;
    
    printf("%d\n", new);
    toggle = new;
    num = new;
  }
  
  
  
  return 0;
}