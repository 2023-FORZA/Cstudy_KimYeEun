//2231
#include <stdio.h>

int digitSum(int num) {
	int sum = num;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
	int N;
	scanf("%d", &N);

	int result = 0;
	for (int i = 1; i <= N; ++i) {
		if (digitSum(i) == N) {
			result = i;
			break;
		}
	}

	printf("%d\n", result);

	return 0;
}
