#include <stdio.h>
//2753

int main()
{
	int a;
	scanf("%d", &a);

	if (a % 400 == 0)
		printf("%d", 1);

	else if (a % 4 == 0)
		if (a % 100 == 0)
			printf("%d", 0);
		else
			printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}