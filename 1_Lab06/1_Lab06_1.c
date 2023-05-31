#include <stdio.h>
//1547
int main() {
    int n, i, a, b, ball;
    int* ballPtr;
    ball = 1;
    ballPtr = &ball; 
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);

        if (a == *ballPtr)
            *ballPtr = b;
        else if (b == *ballPtr)
            *ballPtr = a;
    }

    printf("%d", *ballPtr); 
    return 0;
}
