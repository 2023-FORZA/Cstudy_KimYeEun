#include <stdio.h>
int main() {
	int x[10];
	int max, i, a = 0;

	for (i = 1; i <= 9; i++) {
		scanf("%d", &x[i]);
		if (a < x[i]) {
			a = x[i];
			max = i;
		}
	}
	printf("%d\n%d", a, max);
	return 0;
}