//14720
#include <stdio.h>

int main() {
    int N, milk;
    scanf("%d", &N); // 우유 가게 수

    int count = 0;
    int current_milk = 0; // 첫 번째 우유 상태를 0으로 초기화

    for (int i = 0; i < N; i++) {
        scanf("%d", &milk);

        // 현재 우유 상태와 다음 우유 상태가 조건에 부합하는지 확인하여 카운트 증가
        if (current_milk == 0 && milk == 0) {
            count++;
            current_milk = 1;
        }
        else if (current_milk == 1 && milk == 1) {
            count++;
            current_milk = 2;
        }
        else if (current_milk == 2 && milk == 2) {
            count++;
            current_milk = 0;
        }
    }

    printf("%d\n", count);

    return 0;
}