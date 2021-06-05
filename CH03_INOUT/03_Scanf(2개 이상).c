#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//정수 2개 입력
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a,b);
	printf("거꾸로\n");
	printf("%d %d\n", b, a);
	system("pause");
	return 0;
}