//8393
#include <stdio.h>
int main()
{
	int a,b,sum;
	scanf("%d", &a);
	sum = 0;
	for (b = 1; b <= a; ++b) {
		sum += b;
	}
	printf("%d", sum);

	return 0;
}