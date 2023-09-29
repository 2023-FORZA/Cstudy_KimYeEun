//1357
#include <stdio.h>

int Rev_num(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int ans = Rev_num(Rev_num(A) + Rev_num(B));
    printf("%d\n", ans);

    return 0;
}

