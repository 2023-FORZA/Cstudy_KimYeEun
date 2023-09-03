//2941
#include <stdio.h>
#include <string.h>

int main() {
    char Cro_al[101];
    scanf("%s", Cro_al);

    int len = strlen(Cro_al);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (Cro_al[i] == 'c' && (Cro_al[i + 1] == '=' || Cro_al[i + 1] == '-')) {
            i++;
        }
        else if (Cro_al[i] == 'd') {
            if (Cro_al[i + 1] == 'z' && Cro_al[i + 2] == '=') {
                i += 2;
            }
            else if (Cro_al[i + 1] == '-') {
                i++;
            }
        }
        else if ((Cro_al[i] == 'l' || Cro_al[i] == 'n') && Cro_al[i + 1] == 'j') {
            i++;
        }
        else if ((Cro_al[i] == 's' || Cro_al[i] == 'z') && Cro_al[i + 1] == '=') {
            i++;
        }

        count++;
    }

    printf("%d\n", count);

    return 0;
}

