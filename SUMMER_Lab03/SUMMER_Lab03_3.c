//1978
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int* numbers = (int*)malloc(N * sizeof(int));

    if (numbers == NULL) {
        printf("메모리 할당 오류\n");
        return 1;
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] <= 1) {
            continue;
        }

        int PrimeNum = 1;

        for (int j = 2; j * j <= numbers[i]; j++) {
            if (numbers[i] % j == 0) {
                PrimeNum = 0;
                break;
            }
        }

        if (PrimeNum) {
            count++;
        }
    }

    printf("%d\n", count);

    free(numbers);

    return 0;
}
