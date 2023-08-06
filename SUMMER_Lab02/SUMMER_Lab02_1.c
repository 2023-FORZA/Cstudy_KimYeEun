//1110
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    char numStr[3];
    snprintf(numStr, sizeof(numStr), "%02d", num);

    int count = 0;

    while (1) {
        int sum = numStr[0] - '0' + numStr[1] - '0';
        char sumStr[3];
        snprintf(sumStr, sizeof(sumStr), "%02d", sum);
        int newNum = (numStr[1] - '0') * 10 + (sumStr[1] - '0');

        count++;

        if (newNum == num) {
            break;
        }

        numStr[0] = numStr[1];
        numStr[1] = sumStr[1];
    }

    printf("%d", count);

    return 0;
}

