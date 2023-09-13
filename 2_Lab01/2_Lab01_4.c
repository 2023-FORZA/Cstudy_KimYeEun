//10773
#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);

    int num[100001];
    int a[100001];
    int sum = 0;
    int j = 0;

    for (int i = 0; i < K; i++) {
        scanf("%d", &num[i]);

        if (num[i] != 0) {
            a[j] = num[i];
            j++;
        }
        else {
            a[j - 1] = 0;
            j--;
        }
    }

    for (int i = 0; i < j; i++) {
        sum += a[i];
    }

    printf("%d\n", sum);
    return 0;
}
