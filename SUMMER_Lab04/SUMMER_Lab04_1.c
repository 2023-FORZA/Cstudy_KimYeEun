//1032
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char list_str[50];
    scanf("%s", list_str);

    while (--N) {
        char str[50];
        scanf("%s", str);

        for (int i = 0; i < strlen(list_str); i++) {
            if (list_str[i] != str[i]) {
                list_str[i] = '?'; 
            }
        }
    }

    printf("%s\n", list_str);

    return 0;
}
