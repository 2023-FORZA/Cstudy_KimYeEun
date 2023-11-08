//1236
#include <stdio.h>

int main() {
	int N, M;
	char arr[50][50]={0};

	scanf("%d %d", &N, &M);

	int countN = N;
	int countM = M;

	for (int i = 0; i < N; i++) {
		scanf("%s", arr[i]);
	}

	for(int i = 0; i < N; i++){
		for (int j = 0; j < M; j++) {

			if (arr[i][j] == 'X') {
				countN--;
				break;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {

			if (arr[j][i] == 'X') {
				countM--;
				break;
			}
		}
	}

	if (N == 1)
	{
		printf("%d\n", countM);
	}
	else if (M == 1)
	{
		printf("%d\n", countN);
	}
	else
	{
		printf("%d\n", countN < countM ? countM : countN);

	}

	return 0;
}

/*처음 문제 접근 방식 : 행에 X가 적어도 하나 있으면 됨
문제 이해에서 오류*/