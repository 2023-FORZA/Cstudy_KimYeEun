//2739
#include <stdio.h>
int main()
{

	int a, b;
	scanf("%d", &a);
	for (b = 1; b < 10; ++b)
		printf("%d X %d = %d\n", a, b, a * b);

	return 0;

}