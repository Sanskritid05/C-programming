#include <stdio.h>

int main()
{
  unsigned long long num;
  int flag = 0, flag2 = 0 , sum = 0;
  scanf("%llu", &num);

  //check if prime.

  for(int i = 2 ; i < num ; i++) {
    if(num % i == 0) {
      flag += 1 ;
      break;
    }
  }
  //condition for primary prime number.

  if(flag == 0) {

    while(num != 0) {
      int last = num%10;
      sum += last;
      num = num/10;
    }
     // sum is the new num to be checked for prime
    // check if prime
    for(int i = 2 ; i < sum ; i++) {
      if(sum % i == 0) {
        flag2 += 1 ;
        break;
      }
    }
    if(flag2 == 0)
        printf("YES");
    else
        printf("NO");
  }
}
