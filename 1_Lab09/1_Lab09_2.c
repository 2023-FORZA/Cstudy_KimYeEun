//11720
#include <stdio.h>
#include <stdlib.h>

int main() {
	int* arr;
	int n, sum = 0;

	scanf("%d", &n);
	getchar();

	arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL) {
		printf("메모리 할당 오류\n");
		return 1;
	}

	for (int i = 0; i < n; i++) {
		char digitStr[2];
		scanf("%1s", digitStr);
		arr[i] = atoi(digitStr);
		sum += arr[i];
	}

	printf("%d", sum);

	free(arr);

	return 0;
}
