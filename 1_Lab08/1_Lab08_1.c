//7568
#include <stdio.h>
#include <stdlib.h>

struct body {
	int weight;
	int height;
}; 

int main() {
	int T, i, j, k=0;
	scanf("%d", &T);

	struct body* s = (struct body*)malloc(T * sizeof(struct body));

	for (i = 0; i < T; i++) {
		scanf("%d %d", &s[i].weight, &s[i].height);
	}

	for (i = 0; i < T; i++) {
		k = 0;
		for (j = 0; j < T; j++) {
			if (s[i].weight < s[j].weight && s[i].height < s[j].height)
				k++;
		}
		printf("%d ", k + 1);
	}
	free(s);

	return 0;
}