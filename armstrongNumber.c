#include <stdio.h>
#include <math.h>
int main()
{
    int num, dig = 0, count = 0 ;
    scanf("%d", &num);
    int original = num;
    int original2 = num ;
    while(original != 0){
        original = original/10;
        dig++;
    }
    int digit = dig;
    while(original2 != 0){
        int last = original2%10;
        count += (int)pow(last,digit);
        original2 = original2/10;
    }
    if(count == num)
        printf("YES");
    else
        printf("NO");
        
    return 0;
}