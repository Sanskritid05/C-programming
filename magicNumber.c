#include <stdio.h>

int main()
{
   unsigned long long num, count = 0, count2 = 0;
   scanf("%llu", &num);
   unsigned long long original = num;
   while(num != 0 ){
        int last = num % 10 ;
        count += last;
        num = num / 10;
   }
   if(count >= 10){
        while(count != 0){
            int last = count % 10;
            count2 += last;
            count = count/10;
       }
        if(count2 == 1){
           printf("%llu is a magic number", original);
           return 0;
       }
       else{
            printf("%llu is not a magic number", original); 
            return 0;
       }
   }
    if(count == 1){
        printf("%llu is a magic number", original);
        return 0;
    }
    else{
        printf("%llu is not a magic number", original);
        return 0;
    }
    return 0;
}
