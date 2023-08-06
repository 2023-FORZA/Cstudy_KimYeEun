//1925
#include <stdio.h>

int DistanceTri(int x1, int x2, int y1, int y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

void TriangleType(int x1, int y1, int x2, int y2, int x3, int y3) {
    int side1 = DistanceTri(x1, x2, y1, y2);
    int side2 = DistanceTri(x2, x3, y2, y3);
    int side3 = DistanceTri(x3, x1, y3, y1);

    if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1)) {
        printf("X\n");
        return;
    }

    int maxSide = side1;
    if (side2 > maxSide) {
        maxSide = side2;
    }
    if (side3 > maxSide) {
        maxSide = side3;
    }

    int sum = side1 + side2 + side3 - maxSide;

    if (side1 == side2 && side2 == side3) {
        printf("JungTriangle\n");
        return;
    }
    if (side1 == side2 || side2 == side3 || side3 == side1) {
        if (sum > maxSide) {
            printf("Yeahkak2Triangle\n");
        }
        if (sum == maxSide) {
            printf("Jikkak2Triangle\n");
        }
        if (sum < maxSide) {
            printf("Dunkak2Triangle\n");
        }
        return;
    }

    if (sum > maxSide) {
        printf("YeahkakTriangle\n");
    }
    if (sum == maxSide) {
        printf("JikkakTriangle\n");
    }
    if (sum < maxSide) {
        printf("DunkakTriangle\n");
    }
}

int main() {
    int x1, x2, x3, y1, y2, y3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    TriangleType(x1, y1, x2, y2, x3, y3);

    return 0;
}