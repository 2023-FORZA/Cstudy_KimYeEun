//3052
#include <stdio.h>

int main() {
	int N;
	int rest[10] = { 0 }; //나머지 계산값 입력 배열
	int num[42] = { 0 }; //나머지 유무 여부 따지기 위한 배열
	int count = 0; //서로 다른 개수

	for (int i = 0; i < 10; i++) {
		scanf("%d", &N);
		rest[i] = N % 42;
		num[rest[i]] = 1;
	}

	for (int i = 0; i < 42; i++) {
		if (num[i] == 1) {
			count++;
		}
	}

	printf("%d", count);

	return 0;
}

/*
int main() {
	int N;
	int R[] = { 0 };
	int count = 10;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &N);
		R[i] = N % 42;
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (R[i] == R[j]) {
				count--;
			}
		}
	}

	printf("%d", count);

	return 0;
}
*/