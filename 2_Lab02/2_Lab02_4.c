//2577
#include <stdio.h>

int main() {
    int A, B, C, pro;
    int num[10] = { 0 };
    int zero, one, two, three, four, five, six, seven, eight, nine;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    pro = A * B * C;

    while (pro > 0) {
        int digit = pro % 10;
        num[digit]++;
        pro /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}
