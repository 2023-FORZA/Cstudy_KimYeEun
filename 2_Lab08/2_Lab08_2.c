//10612
#include <stdio.h>

int Digitsum(int T) {
	int result;
	int A = T / 300;
	int B = (T - (A * 300)) / 60;
	int C = (T - (A * 300) - (B * 60)) / 10;

	if (T % 10 != 0) {
		result = printf("-1");
		return result;
	}

	else {
		result = printf("%d %d %d", A, B, C);
		return result;
	}
}

int main() {
	int T;
	scanf("%d", &T);
	Digitsum(T);

	return 0;
}