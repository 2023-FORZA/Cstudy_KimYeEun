//10809
#include <stdio.h>
#include <string.h>

int main()
{
	int i, b;
	char S[100];
	scanf("%s", S);

	int a[26];
	for(i = 0; i < 26; i++) {
		a[i] = 100;
	}

	for(i = 0; i < strlen(S); i++) {
		b = S[i] - 'a';
		if (a[b] > i)
			a[b] = i;
	}

	for (i = 0; i < 26; i++) {
		if (a[i] == 100)
			printf("-1 ");
		else
			printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}