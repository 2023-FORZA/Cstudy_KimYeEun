//29734
#include <stdio.h>

int main() {
    long long N, M;
    int T, S;

    scanf("%lld %lld", &N, &M);
    scanf("%d %d", &T, &S);

    long long work_Z = 0;
    long long work_D = 0;


        if (N % 8 == 0) { //8�� ����������� ���ڴ� Ƚ�� -1
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

    work_D = ((M / 8) * (2 * T + M + S)) + T + (M % 8);
    return 0;
}

