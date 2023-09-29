//29722
#include <stdio.h>

int main() {
    int Y, M, D, N;
    scanf("%d-%02d-%02d\n", &Y, &M, &D);
    scanf("%d", &N);

    D += N;

    while (D > 30) {
        D -= 30;
        M++;
        if (M > 12) {
            M -= 12;
            Y++;
        }
    }

    printf("%d-%02d-%02d\n", Y, M, D);

    return 0;
}


//29734
#include <stdio.h>

int main() {
    long long N, M;
    int T, S;

    scanf("%lld %lld", &N, &M);
    scanf("%d %d", &T, &S);

    long long work_Z = 0;
    long long work_D = 0;

    if (N < 8 || M < 8) { //N, M이 8보다 작을 때
        if (N < M + T) { //M은 독서실에 가는 시간 T와의 합
            printf("Zip\n");
            printf("%lld", N);
        }
        else {
            printf("Dok\n");
            printf("%lld", (M + T));
        }
    }
    else {
        if (N % 8 == 0) { //8로 나누어떨어지면 잠자는 횟수 -1
            work_Z = (((N / 8) - 1) * S) + N;
        }
        else {
            work_Z = ((N / 8) * S) + N;
        }

        if (M % 8 == 0) {
            work_D = (((M / 8) - 1) * S) + M + (T * (((M / 8) - 1) * 2 + 1));
        }
        else {
            work_D = ((M / 8) * S) + M + (T * (M / 8));
        }

        if (work_Z < work_D) {
            printf("Zip\n");
            printf("%lld", work_Z);
        }
        else {
            printf("Dok\n");
            printf("%lld", work_D);
        }
    }
    work_D = ((M / 8) * (2 * T + M + S)) + T + (M % 8);
    return 0;
}
