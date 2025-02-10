#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d",&a);  
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<1 || b<1 || c<1 || a>1000000 || b>1000000 || c>1000000){
        printf("Lengths: [%d, %d, %d]\nType: Invalid\nCannot form a valid shape.",a,b,c);  
        return 0;
    }
    else if( a+b<=c || a+c<=b || b+c<=a){
        printf("Lengths: [%d, %d, %d]\nType: Invalid\nCannot form a valid shape.",a,b,c);          
    }
    else if(a==b && b==c){
        printf("Lengths: [%d, %d, %d]\nType: Equilateral\nAll sides are of the same length.",a,b,c);
        return 0;
    }
    else if(a==b|| b==c|| a==c){
        printf("Lengths: [%d, %d, %d]\nType: Isosceles\nExactly two sides are equal.",a,b,c);
        return 0;
    }
    else{
        printf("Lengths: [%d, %d, %d]\nType: Scalene\nAll sides are of different lengths.",a,b,c);
    }
    return 0;
}