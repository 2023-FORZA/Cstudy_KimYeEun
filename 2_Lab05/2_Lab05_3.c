//15894
#include <stdio.h>

int main() {
	long long n;
	scanf("%d", &n);

	long long ans = 2 * n + 1 + n + n - 1;
	//정사각형 세로*줄 + 맨 윗줄 + 맨 아랫줄 + 층마다의 1

	printf("%d\n", ans);
	return  0;
}