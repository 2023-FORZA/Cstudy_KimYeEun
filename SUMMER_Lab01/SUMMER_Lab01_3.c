//1094
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sticks[7] = { 64, 32, 16, 8, 4, 2, 1 };
    int count = 0;

    for (int i = 0; i < 7; i++) {
        if (n >= sticks[i]) {
            n -= sticks[i];
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

