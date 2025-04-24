#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    int num = N ;
    if (N == 0) {
        printf("Binary equivalent of 0: 0\n");
        return 0;
    }

    int binary[32];  
    int index = 0;

    while (N > 0) {
        binary[index] = N % 2; 
        N = N / 2;              
        index++;                
    }

    printf("Binary equivalent of %d: ", num);
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n"); 
    return 0;
}
