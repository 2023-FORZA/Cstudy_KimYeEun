//1292
#include <stdio.h>

int main() {
    int num[1001] = { 0 };
    int A, B;
    int ans = 0;

    scanf("%d %d", &A, &B);

    int sum = 0;
    int current_number = 1;

    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= i; j++) {
            if (sum >= 1001) break;
            num[sum] = current_number;
            sum++;
        }
        current_number++;
    }

    for (int l = A; l <= B; l++) {
        ans += num[l - 1];
    }

    printf("%d", ans);

    return 0;
}