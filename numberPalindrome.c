#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int check = num; 
  int rev = 0 ;
  while (check != 0){
    int last_dig = check % 10;
    rev = rev*10 +last_dig;
    check = check/10;
  }
  if(rev == num){
    printf("YES");
  }
  else{
    printf("NO");
  }
  

  
  return 0;
}