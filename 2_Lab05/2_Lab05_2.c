//1598
#include <stdio.h>
#include <math.h>

int x(int n) {
	if (n % 4 == 0) {
		return n / 4;
	}
	else{
		return n / 4 + 1;
	}
}

int y(int n) {
	if (n % 4 == 0) {
		return 4;
	}
	else{
		return n % 4;
	}
}

int main() {
	int A, B;

	scanf("%d %d", &A, &B);

	int result = abs(x(A) - x(B)) + abs(y(A) - y(B));

	printf("%d", result);

	return 0;
}