//1085
#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int left = x;
    int right = w - x;
    int down = y;
    int up = h - y;

    int min_dist = min(min(left, right), min(down, up));
    printf("%d\n", min_dist);

    return 0;
}

