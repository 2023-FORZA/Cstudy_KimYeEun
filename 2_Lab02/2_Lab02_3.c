//2460
#include <stdio.h>

int main() {
	int down, up, Max_num = 0;
	int num[11] = { 0 };
	int total[11] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d %d", &down, &up);
		num[i] = up - down;
		if (i == 0) total[i] = num[i];
		else {
			total[i] = total[i -1] + num[i];
		}
		if (total[i] > Max_num) {
			Max_num = total[i];
		}
	}

	printf("%d", Max_num);

	return 0;
	
}