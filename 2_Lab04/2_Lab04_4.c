//9501
#include <stdio.h>

int main() {
	int T;

	scanf("%d", &T);

	while (T--) {
		int N, D;
		int count = 0;

		scanf("%d %d", &N, &D);
		for (int i = 0; i < N; i++) {
			int v, f, c;
			scanf("%d %d %d", &v, &f, &c);

			double max_dis = (f / (double)c) * v;

			if (max_dis >= D) {
				count++;
			}

		}

		printf("%d\n", count);
	}
	return 0;
}

