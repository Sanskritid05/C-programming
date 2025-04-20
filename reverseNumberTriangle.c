#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int num = 1;

    for (int i = 1; i <= n; i++) {
        int row[i]; 

        for (int j = 0; j < i; j++) {
            row[j] = num;
            num++;
        }

        for (int j = i - 1; j >= 0; j--) {
            printf("%d ", row[j]);
        }

        printf("\n"); 
    }

    return 0;
}
