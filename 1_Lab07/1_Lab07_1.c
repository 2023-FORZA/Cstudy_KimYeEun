//2675
#include <stdio.h>
#include <string.h>

int main()
{
	int T, R, i, j, p;
	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		char S[20];
		scanf("%d %s", &R, S);

		for (j = 0; j < strlen(S); j++) {
			for (p = 0; p < R; p++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	return 0;
}