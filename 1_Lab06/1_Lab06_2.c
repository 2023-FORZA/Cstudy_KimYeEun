#include <stdio.h>
#include <stdlib.h>
//1037
int main() {
	int a, max, min, i;
	scanf("%d", &a);

	int* numbers = (int*)malloc(a * sizeof(int));


	for (i = 0; i < a; i++) {
		scanf("%d", &numbers[i]);
	}

	max = numbers[0];
	min = numbers[0];

	for (i = 1; i < a; i++) {
		if (numbers[i] > max) {
			max = numbers[i];//Á¦ÀÏ ÀÛÀº °Å¶û Å« °Å¶û °öÇÏ¸é ³ª¿È
		}
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}

	printf("%lld", (long long)max * min);

	free(numbers);
	return 0;
}