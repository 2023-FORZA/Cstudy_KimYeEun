//2884
#include <stdio.h>
int main() {
	int h, m;
	scanf("%d %d", &h, &m);

	int hour, minute;
	
    if (m < 45) {
        if (h == 0) {
            hour = 23;
        }
        else {
            hour = h - 1;
        }
        minute = 60 - (45 - m);
    }
    else {
        hour = h;
        minute = m - 45;
    }

	printf("%d %d\n", hour, minute);

	return 0;
}