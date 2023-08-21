//1225
#include <stdio.h>
#include <string.h>

int main() {
    char A[10001], B[10001];
    scanf("%s %s", A, B);

    long long result = 0;

    for (int i = 0; i < strlen(A); i++) {
        for (int j = 0; j < strlen(B); j++) {
            result += (A[i] - '0') * (B[j] - '0');
        }
    }

    printf("%lld\n", result);

    return 0;
}

