//3053
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main() {
	int R;
	double U_S, T_S;
	scanf("%d", &R);

	U_S = R * R * M_PI;
	T_S = 2 * R * R;
	printf("%f\n%f", U_S,T_S);

	return 0;
}
//double 안 씀, PI값 math.h 라이브러리 사용