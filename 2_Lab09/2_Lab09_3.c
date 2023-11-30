//1284
#include <stdio.h>

int main() {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) // 종료 조건
            break;

        int count = 1;
        while (N != 0) {
            int digit = N % 10; // 맨 끝 자리 숫자 확인
            N /= 10; // 다음 자리 수를 확인하기 위해 10으로 나눔

            if (digit == 1) {
                count += 3;
            }
            else if (digit == 0) {
                count += 5;
            }
            else {
                count += 4;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}