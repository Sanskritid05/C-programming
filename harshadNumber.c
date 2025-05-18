#include <stdio.h>

int main()
{
  int original, sum = 0;
  scanf("%d", &original);
  int num = original;
  while(num != 0) {
    int last = num % 10;
    sum += last;
    num = num / 10;
  }
  if(original % sum == 0) {
    printf("%d is a harshad number", original);
  }
  else {
        printf("%d is not a harshad number", original);
  }
  return 0;
}