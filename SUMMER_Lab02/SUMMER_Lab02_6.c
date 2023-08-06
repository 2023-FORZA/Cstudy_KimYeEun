//10820
#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int a, b, c, d;
    int length;

    while (gets(s) != NULL) {
        length = strlen(s);
        a = 0, b = 0, c = 0, d = 0;

        for (int i = 0; i < length; i++) {
            if (s[i] >= 97 && s[i] <= 122) {
                a++;
            }
            else if (s[i] >= 65 && s[i] <= 90) {
                b++;
            }
            else if (s[i] >= 48 && s[i] <= 57) {
                c++;
            }
            else if (s[i] == 32) {
                d++;
            }
        }

        printf("%d %d %d %d\n", a, b, c, d);
    }

    return 0;
}



			