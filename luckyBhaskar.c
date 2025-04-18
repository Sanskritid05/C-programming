#include <stdio.h>

int main() {
    double x, money;
    int n;
    scanf("%lf %d", &x, &n);

    money = x;
    double minAmount = x;
    int i = 1;

    while (i <= n) {
        if (i % 6 == 0) {
            // Divisible by both 2 and 3: gain 70%
            money += money * 0.7;
            if (money < minAmount)
                minAmount = money;

            // Skip next 6 days (i.e., move 7 days forward)
            i += 7;
            continue;
        } else if (i % 2 == 0) {
            money -= money * 0.125;
        } else if (i % 3 == 0) {
            money -= money * 0.2;
        } else {
            money -= money * 0.1;
        }

        if (money < minAmount)
            minAmount = money;

        if (money < 0.4 * x) {
            printf("Stopped early after %d days: %.2lf\n", i, money);
            printf("Minimum amount held by Bhaskar: %.2lf\n", minAmount);
            printf("Better Luck Next Time!\n");
            return 0;
        }

        i++;
    }

    printf("After %d days: %.2lf\n", n, money);
    printf("Minimum amount held by Bhaskar: %.2lf\n", minAmount);
    if (money > 0.7 * x) {
        printf("Lucky Bhaskar\n");
    } else {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}
