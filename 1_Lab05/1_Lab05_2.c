#include <stdio.h>
int x[100];
int main() {
	int a, i, j;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d", &x[i]);
	}

	int v;
	scanf("%d", &v);

	int count = 0;
	for (j = 0; j < a; j++) {
		if (x[j] == v) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}