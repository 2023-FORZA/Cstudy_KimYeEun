//2309
#include <stdio.h>

int main() {
	int i, j, temp;
	int height[9];
	int total;
	int s, b;
	for (i = 0; i < 9; i++) {
		scanf("%d", &height[i]);
	}

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (height[j] > height[i]) {
				temp = height[j];
				height[j] = height[i];
				height[i] = temp;
			}
		}
	}

	for (i = 0; i < 9; i++) {
		total += height[i];
	}

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if ((total - height[i] - height[j]) == 100) {
				s = i;
				b = j;
			}
		}
	}

	for (i = 0; i < 9; i++) {
		if (i != s && i != b)
			printf("%d\n", height[i]);
	}

	return 0;
}