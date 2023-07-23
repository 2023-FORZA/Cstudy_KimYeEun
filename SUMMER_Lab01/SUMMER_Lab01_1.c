//1063
#include <stdio.h>

int pos(int x, int y) {
    return x >= 1 && x <= 8 && y >= 1 && y <= 8;
}

void moveKing(int* x, int* y, char move) {
    int dx = 0, dy = 0;
    switch (move) {
    case 'R':
        dx = 1;
        break;
    case 'L':
        dx = -1;
        break;
    case 'B':
        dy = -1;
        break;
    case 'T':
        dy = 1;
        break;
    case 'RT':
        dx = 1;
        dy = 1;
        break;
    case 'LT':
        dx = -1;
        dy = 1;
        break;
    case 'RB':
        dx = 1;
        dy = -1;
        break;
    case 'LB':
        dx = -1;
        dy = -1;
        break;
    }

    int pre_x = *x + dx;
    int pre_y = *y + dy;
    if (pos(pre_x, pre_y)) {
        *x = pre_x;
        *y = pre_y;
    }
}

int main() {
    char king[3];
    char stone[3];
    int king_x, king_y, stone_x, stone_y;

    scanf("%2s", king);
    scanf("%2s", stone);

    king_x = king[0] - 'A' + 1;
    king_y = king[1] - '0';
    stone_x = stone[0] - 'A' + 1;
    stone_y = stone[1] - '0';

    int num;
    scanf("%d", &num);

    char moves[3]; 

    for (int i = 0; i < num; i++) {
        scanf("%2s", moves);

        int prev_king_x = king_x;
        int prev_king_y = king_y;
        int prev_stone_x = stone_x;
        int prev_stone_y = stone_y;

        moveKing(&king_x, &king_y, moves[0]);
        moveKing(&stone_x, &stone_y, moves[0]);

        if (king_x == stone_x && king_y == stone_y) {
            moveKing(&king_x, &king_y, moves[1]);
            moveKing(&stone_x, &stone_y, moves[1]);
        }
        else {
            moveKing(&king_x, &king_y, moves[1]);
        }
    }

    printf("%c%d\n", king_x - 1 + 'A', king_y);
    printf("%c%d\n", stone_x - 1 + 'A', stone_y);

    return 0;
}





