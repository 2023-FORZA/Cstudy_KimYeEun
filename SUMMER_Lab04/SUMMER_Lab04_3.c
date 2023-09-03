//4673
#include <stdio.h>

int d(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int self_num[10001] = { 0 };

    for (int i = 1; i <= 10000; i++) {
        int next = d(i);
        if (next <= 10000) {
            self_num[next] = 1;
        }
    }

    for (int i = 1; i <= 10000; i++) {
        if (!self_num[i]) {
            printf("%d\n", i);
        }
    }

    return 0;
}