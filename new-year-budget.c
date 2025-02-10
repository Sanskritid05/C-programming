#include <stdio.h>

int main() {
    int budget, guest, food, decor, music, extra;
    scanf("%d",&budget);
    scanf("%d",&guest);
    scanf("%d",&food);
    scanf("%d",&decor);
    scanf("%d",&music);
    scanf("%d",&extra);
    int total = (guest * food) + decor + extra;
    if (guest > 25) {
        total += music;
    }
    if (total > budget) {
        printf("Celebration Denied");
    } 
    else {
        if (guest > 5 && guest <= 50) {
            if (decor < 0.3 * budget || (guest * food) < 0.5 * budget) {
                if (guest > 25 && music > 0) {
                    printf("Celebration Approved");
                } 
                else if (guest <= 25) {
                    printf("Celebration Approved");
                } 
                else {
                    printf("Celebration Denied");
                }
            } 
            else {
                printf("Celebration Denied");
            }
        } 
        else {
            printf("Celebration Denied");
        }
    }

    return 0;
}
