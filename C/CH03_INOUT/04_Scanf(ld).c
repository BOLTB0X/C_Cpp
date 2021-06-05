#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//한 자리 씩 끊어서 입력받기
int main(void) {
	int a, b, c;
	scanf("%ld%ld%ld", &a, &b, &c); //엔터를 처라 하나씩
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}