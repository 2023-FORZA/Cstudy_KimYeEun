//14720
#include <stdio.h>

int main() {
    int N, milk;
    scanf("%d", &N); // ���� ���� ��

    int count = 0;
    int current_milk = 0; // ù ��° ���� ���¸� 0���� �ʱ�ȭ

    for (int i = 0; i < N; i++) {
        scanf("%d", &milk);

        // ���� ���� ���¿� ���� ���� ���°� ���ǿ� �����ϴ��� Ȯ���Ͽ� ī��Ʈ ����
        if (current_milk == 0 && milk == 0) {
            count++;
            current_milk = 1;
        }
        else if (current_milk == 1 && milk == 1) {
            count++;
            current_milk = 2;
        }
        else if (current_milk == 2 && milk == 2) {
            count++;
            current_milk = 0;
        }
    }

    printf("%d\n", count);

    return 0;
}