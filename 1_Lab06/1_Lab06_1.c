#include <stdio.h>
//1547
int main() {
	int n, i, a, b, ball;
	ball = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a == ball)
			ball = b;
		else if (b == ball)
			ball = a;
	}
	printf("%d", ball);
	return 0;
}