//1284
#include <stdio.h>

int main() {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) // ���� ����
            break;

        int count = 1;
        while (N != 0) {
            int digit = N % 10; // �� �� �ڸ� ���� Ȯ��
            N /= 10; // ���� �ڸ� ���� Ȯ���ϱ� ���� 10���� ����

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