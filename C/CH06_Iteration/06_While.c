#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//특정문자 n번 출력 
int main(void) {
	int n;
	char a;
	scanf("%d %c", &n, &a);
	while (n--) {
		printf("%c ", a);
	}
	system("pause");
	return 0;
}