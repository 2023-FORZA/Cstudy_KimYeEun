//1475
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int count[10] = { 0 };

    while (N > 0) {
        int digit = N % 10;
        if (digit == 6 || digit == 9) {
            if (count[6] <= count[9])
                count[6]++;
            else
                count[9]++;
        }
        else {
            count[digit]++;
        }
        N /= 10;
    }

    int maxCount = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount)
            maxCount = count[i];
    }

    printf("%d\n", maxCount);

    return 0;
}
