#include <stdio.h>
#include <math.h>
int main()
{
    int original;
    scanf("%d", &original);
    
    int num , num2 ;
    num = num2 = original ;
    
    int count = 0 , sum = 0 , check = 0;
    
    while(num != 0){
        int last = num % 10;
        sum += last;
        num = num/10;
        count += 1;
    }
    // printf("Original : %d\n", original);
    // printf("Count : %d\n", count);
    
    int square = (int)pow(original, 2);
    int use_square = square ;
    // printf("Square :%d\n",square);
    // printf("Square :%d\n",use_square);
    
    while(use_square > 10){
        int last = use_square % (int)pow(10,count);
        check += last ;
        use_square = use_square/(int)pow(10,count);
    }
    if(check == original)
        printf("%d is automorphic",original);
    else
        printf("%d is not automorphic",original);
    
    
    
    return 0;
}