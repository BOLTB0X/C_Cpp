#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//기존 scanf()함수는 공백을 만날 때 까지 입력
int main(void) {
	char a[100];
	gets(a); //공백까지 포함하여 한 줄을입력
	printf("%s\n", a);
	system("pause");
	return 0;
}