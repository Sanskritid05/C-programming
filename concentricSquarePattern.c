#include <stdio.h>

int main() {
    int n ;
    scanf("%d", &n);
    int size = n * 2 - 1;  
    
    for (int i = 0; i < size; i++) {
      
        for (int j = 0; j < size; j++) {  
          
          int dist = (i < j) ? i : j;  
          dist = (dist < size - 1 - i) ? dist : size - 1 - i;  
          dist = (dist < size - 1 - j) ? dist : size - 1 - j;  
            
            printf("%d ", n - dist);
        }
        printf("\n");
    }

    return 0;
}
