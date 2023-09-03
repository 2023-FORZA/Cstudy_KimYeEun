//9012
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char str[51];
        int stack = 0;
        scanf("%s", str);

        int length = strlen(str);
        int is_balanced = 1;

        for (int i = 0; i < length; i++) {
            if (str[i] == '(') {
                stack++;
            }
            else if (str[i] == ')') {
                stack--;
                if (stack < 0) {
                    is_balanced = 0;
                    break;
                }
            }
        }

        if (stack == 0 && is_balanced) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}