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
		scanf("%d", &score[i]); //���� �Է¹���
		if (score[i] > Max_S) { //�ְ� ����
			Max_S = score[i];
		}
	}

	for (int j = 0; j < N; j++) {
		New_score[j] = (float)score[j] / Max_S * 100; //���ο� ������� ���� ����
		sum += (float)New_score[j]; //������ ��
	}

	aver = (float)sum / N; //��� ���
	printf("%lf\n", aver); //��� ���

	return 0;
}

//���ο� ������ ����� �� ������� ������ �������� ���� �� �־��� ������ �ڷ��� ��ȯ�� �ʿ�����
//ó���� ���� for���� ����ؼ� ���� �ɸ�, ������ �޴� for���� ���ο� ���� ����ϴ� for���� ����
//�����ھ int�� �����ϰ� �ؿ��� float���� �޾Ƽ� ��� Ʋ��