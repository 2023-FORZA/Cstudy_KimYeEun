//1712
#include <stdio.h>

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (C - B > 0) {
			printf("%d", A / (C - B) + 1);
	}

	else {
		printf("-1");
	}

	return 0;
}