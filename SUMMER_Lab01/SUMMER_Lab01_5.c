//3062
#include <stdio.h>
#include <string.h>

int reverseNumber(int num) {
    char str[20];
    sprintf(str, "%d", num);

    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    int reverseNum = atoi(str);

    return reverseNum;
}

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);

        int sum = n + reverseNumber(n);

        if (isPalindrome(sum)) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}




