//1002
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int T, spot;
	double distance;
	int x1, y1, r1, x2, y2, r2;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

		if (r1 + r2 < distance) {
			spot = 0;
		}
		else if (abs(r1 - r2) > distance) {
			spot = 0;
		}
		else if (r1 == r2 && distance == 0) {
			spot = -1;
		}
		else if (abs(r1 - r2) == distance) {
			spot = 1;
		}
		else if (r1 + r2 == distance) {
			spot = 1;
		}
		else {
			spot = 2;
		}

		printf("%d\n", spot);
	}
	
	return 0;
}