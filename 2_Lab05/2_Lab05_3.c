//15894
#include <stdio.h>

int main() {
	long long n;
	scanf("%d", &n);

	long long ans = 2 * n + 1 + n + n - 1;
	//���簢�� ����*�� + �� ���� + �� �Ʒ��� + �������� 1

	printf("%d\n", ans);
	return  0;
}