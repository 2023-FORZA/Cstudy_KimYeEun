//1159
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	char player[151][31];
	char first[151];
	int count[26] = { 0 };

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", &player[i]);
		first[i] = player[i][0];
		int idx = first[i] - 'a';
		count[idx]++;
	}

	int found = 0;

	for (int i = 0; i < 26; i++) {
		if (count[i] >= 5) {
			found = 1;
			printf("%c", i + 'a');
		}
	}

	if (found == 0) {
		printf("PREDAJA");
	}

	return 0;

}