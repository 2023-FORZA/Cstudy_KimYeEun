//8958
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char arr[80];

	int n, total, *score;
	scanf("%d", &n);
	score = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%s", arr);

		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				total++;
				score[i] += total;
			}
			else total = 0;
		}

		total = 0;
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", score[i]);
	}

	free(score);
	return 0;
}

