//10818
#include <stdio.h>

int main() {
    int N, T, Max, Min;
    scanf("%d", &N);

    scanf("%d", &T);
    Max = T;
    Min = T;

    for (int i = 1; i < N; i++) {
        scanf("%d", &T);

        if (T > Max) {
            Max = T;
        }

        if (T < Min) {
            Min = T;
        }
    }

    printf("%d %d", Min, Max);

    return 0;
}