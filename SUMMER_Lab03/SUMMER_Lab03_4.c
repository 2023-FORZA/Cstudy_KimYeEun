//5354
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int J;
        scanf("%d", &J);

        for (int i = 0; i < J; i++) {
            for (int j = 0; j < J; j++) {
                if (i == 0 || i == J - 1 || j == 0 || j == J - 1) {
                    printf("#");
                }
                else {
                    printf("J");
                }
            }
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}



