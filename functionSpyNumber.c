#include <stdio.h>

int is_spy_number(int n) {
  int sum = 0 , prod = 1 ; 
    while(n != 0){
      int last = n % 10 ; 
      sum += last;
      prod *= last;
      n = n/10 ;
    }
  if(sum == prod)
    return 1;
  else
    return 0;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_spy_number(n));
    return 0;
}