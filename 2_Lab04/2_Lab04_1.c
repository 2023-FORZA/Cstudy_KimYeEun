//1546
#include <stdio.h>

int main() {
	int N, score[1001] = { 0 };
	float New_score[1001] = { 0 };
	int Max_S = 0;
	float sum = 0;
	float aver;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &score[i]); //점수 입력받음
		if (score[i] > Max_S) { //최고 점수
			Max_S = score[i];
		}
	}

	for (int j = 0; j < N; j++) {
		New_score[j] = (float)score[j] / Max_S * 100; //새로운 방식으로 점수 저장
		sum += (float)New_score[j]; //점수의 합
	}

	aver = (float)sum / N; //평균 계산
	printf("%lf\n", aver); //평균 출력

	return 0;
}

//새로운 점수로 계산할 때 결과값이 정수로 떨어지지 않을 수 있었기 때문에 자료형 변환이 필요했음
//처음에 이중 for문을 사용해서 오래 걸림, 점수를 받는 for문과 새로운 점수 계산하는 for문을 나눔
//뉴스코어를 int로 선언하고 밑에서 float으로 받아서 계속 틀림