//2740
#include <stdio.h>

#define MAX 101

int N, M, K;
int A[MAX][MAX], B[MAX][MAX], ans[MAX][MAX];

int main() {
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &A[i][j]);

    scanf("%d %d", &M, &K);

    for (int i = 0; i < M; i++)
        for (int j = 0; j < K; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < K; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < M; k++)
                ans[i][j] += A[i][k] * B[k][j];
        }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
