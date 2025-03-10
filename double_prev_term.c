#include <stdio.h>

int main() {
    int num, first_term;
    scanf("%d", &num);
    first_term = 1;
    printf("<");
    for (int i = 0 ; i < num ; i++) {
        if (i > 0) {
            printf(" ");  
        }
        printf("%d", first_term);
        first_term *= 2; 
    }
    printf(">\n"); 
    return 0;
}
