//5656
#include <stdio.h>
#include <string.h>

int main() {
	int a, b;
	char oper[3];
	int count = 1;
	
	while (strcmp(oper, "E") != 0) {
		scanf("%d %s %d", &a, oper, &b);
		if (strcmp(oper, ">") == 0) {
			printf("Case %d: %s\n", count, (a > b) ? "true" : "false");
		}
		else if (strcmp(oper, ">=") == 0) {
			printf("Case %d: %s\n", count, (a >= b) ? "true" : "false");
		}
		else if (strcmp(oper, "<") == 0) {
			printf("Case %d: %s\n", count, (a < b) ? "true" : "false");
		}
		else if (strcmp(oper, "<=") == 0) {
			printf("Case %d: %s\n", count, (a <= b) ? "true" : "false");
		}
		else if (strcmp(oper, "==") == 0) {
			printf("Case %d: %s\n", count, (a == b) ? "true" : "false");
		}
		else if (strcmp(oper, "!=") == 0) {
			printf("Case %d: %s\n", count, (a != b) ? "true" : "false");
		}
		else break;

		count++;
	}
	return 0;
}
//strcmp 사용, ? : 연선자









/*while (oper != 'E') {
		scanf("%d %s %d", &a, oper, &b);
		if (oper == '>' && strcmp(a, b) == 1) { // strcmp(oper, ">") ==0
			printf("Case %d: true\n", count); // (a > b) ? "true" : "false";
		}
		else if (oper == '>=' && (strcmp(a, b) == 1 || strcmp(a, b) == 0)) {
			printf("Case %d: true\n", count); // (a>=b) ? "true" : "false";
		}
		else if (oper == '<' && strcmp(a, b) == -1) {
			printf("Case %d: true\n", count);
		}
		else if (oper == '<=' && (strcmp(a, b) == -1 || strcmp(a, b) == 0)) {
			printf("Case %d: true\n", count);
		}
		else if (oper == '==' && strcmp(a, b) == 0 ) {
			printf("Case %d: true\n", count);
		}
		else if (oper == '!=' && (strcmp(a, b) == 1 || strcmp(a, b) == -1)) {
			printf("Case %d: true\n", count);
		}
		else {
			printf("Case %d: false\n", count);
		}
		count++;
	}

	return 0;*/