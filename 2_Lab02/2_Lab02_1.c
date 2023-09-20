//1145
#include <stdio.h>

int max(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int num[5];
    int result = 100000000;
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                int min = (num[i] * num[j]) / max(num[i], num[j]);
                min = (min * num[k]) / max(min, num[k]);
                if (min < result) {
                    result = min;
                }
            }
        }
    }

    printf("%d", result);

    return 0;
}

/*시간초과 해결못함
#include <stdio.h>

int main() {
    int num[6], ans, count, result;
    count = 0;
    result = 0;
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

    for (ans = 1; ; ans++) {
        for (int i = 0; i < 5; i++) {
            if (num[i] % ans == 0) {
                count++;
            }
            if (count == 3) {
                break;
                ans = result;
            }
            else {
                continue;
            }
        }
    }
    printf("%d", result);

    return 0;
}
*/
