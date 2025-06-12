#include <stdio.h>
#include <math.h>
int is_disarium_number(int n) {
  int num = n , count = 0 , sum = 0; 
  while(num != 0){
    count ++ ;
    num = num / 10 ; 
  }
  int num2 = n ; 
  while(num2 != 0){
    int last = num2 % 10 ;
    sum += (int)pow(last,count);
    count -= 1 ;
    num2 = num2 / 10 ; 
  }
  if(sum == n)
    return 1 ;
  else
    return 0 ; 
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}