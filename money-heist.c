#include <stdio.h>
int main(){
    
    int digit[10];
    
    scanf("%d %d %d %d %d %d %d %d %d %d",
          &digit[0],&digit[1],&digit[2],&digit[3],&digit[4],&digit[5],&digit[6],&digit[7],&digit[8],&digit[9]);
    int index1, rotate1;
    scanf("%d %d", &index1, &rotate1);
    if (index1 >= 0 && index1 < 10){
        digit[index1] = (digit[index1]+rotate1) % 10;
    }
    int index2, rotate2;
    scanf("%d %d", &index2, &rotate2);
    if (index2 >= 0 && index2 < 10){
        digit[index2] = (digit[index2]+rotate2) % 10;
    }
    int index3, rotate3;
    scanf("%d %d", &index3, &rotate3);
    if (index3 >= 0 && index3 < 10){
        digit[index3] = (digit[index3]+rotate3) % 10;
    }
    printf(
        "%d %d %d %d %d %d %d %d %d %d",
        digit[0],digit[1],digit[2],digit[3],digit[4],digit[5],digit[6],digit[7],digit[8],digit[9]);
    return 0;
}