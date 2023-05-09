#include <stdio.h>
//1330

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	if (a > b)
		printf("%s", ">");
	else if (a == b)
		printf("%s", "==");
	else
		printf("%s", "<");

	return 0;
}
