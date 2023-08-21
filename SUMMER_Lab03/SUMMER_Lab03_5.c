//9550
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int maxNum = 0;

        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);

            if (num >= K) {
                maxNum += num / K;
            }
        }

        printf("%d\n", maxNum);

    }
    return 0;
}
