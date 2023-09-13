//2581
#include <stdio.h>

int prime_num(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);
    int sum = 0;
    int min_Num = -1;

    for (int i = M; i <= N; i++) {
        if (prime_num(i)) {
            if (min_Num == -1) {
                min_Num = i;
            }
            sum += i;
        }
    }

    if (min_Num == -1) {
        printf("-1\n");
    }
    else {
        printf("%d\n%d\n", sum, min_Num);
    }

    return 0;
}

