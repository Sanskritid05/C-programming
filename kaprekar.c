#include <stdio.h>
#include <math.h>
int is_kaprekar(int n) {
  int num = n , count = 0;
  int S = num*num ;
  
  while(num != 0){
    count++;
    num = num/10;
  }
  
  int right = S % (int)pow(10,count) ;
  int left =  S / (int)pow(10,count) ;
  int sum = right + left ;
  
  if(sum == n)
    return 1 ;
  else
    return 0 ;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}