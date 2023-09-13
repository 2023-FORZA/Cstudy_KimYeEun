//2851
#include <stdio.h>
#include <stdlib.h>

int main() {
    int answer = 0;
    int mush[10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &mush[i]);
        sum += mush[i];
        if (abs(sum - 100) <= abs(answer - 100)) {
            answer = sum;
        }
    }

    printf("%d\n", answer);
    return 0;
}
