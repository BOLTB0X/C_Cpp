#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//c에서는 특정한 인덱스의 문자에 바로 접근 가능
int main(void) {
	char a[20] = "Hello World";
	a[4] = ',';
	printf("%s\n", a);
	system("pause");
}