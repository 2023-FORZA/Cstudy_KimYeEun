//29738
#include <stdio.h>

int main() {
	int T, N;
	int count = 0;
	scanf("%d", &T);

	while (T--) {
		scanf("%d", &N);
		count++;

		if (N > 4500) {
			printf("Case #%d: Round 1\n", count);
		}
		else if (N <= 4500 && N > 1000) {
			printf("Case #%d: Round 2\n", count);
		}
		else if (N <= 1000 && N > 25) {
			printf("Case #%d: Round 3\n", count);
		}
		else {
			printf("Case #%d: World Finals\n", count);
		}
	}

	return 0;
}
//프린트문 줄바꿈 까먹지말기