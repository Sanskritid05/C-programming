#include <stdio.h>

int main()
{
    int num, sum = 0;
    scanf("%d", &num);
    int original = num ;
    while(num != 0){
        int last = num%10 ;
        int prod = 1;
        for(int i = 1 ; i <= last ; i++){
            prod = prod*i;
        }
        sum += prod ;
        num = num/10;
    }
    if(sum == original)
        printf("YES");
    else
        printf("NO");
    return 0;
}