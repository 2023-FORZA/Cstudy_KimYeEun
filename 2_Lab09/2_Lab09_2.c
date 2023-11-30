//9655
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	if (N % 2 == 1) {
		printf("SK");
	}

	else if (N % 2 == 0) {
		printf("CY");
	}
	return 0;
}