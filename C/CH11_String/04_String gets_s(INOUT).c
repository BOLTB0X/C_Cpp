#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gets()함수는 버퍼의 크기를 벗어나도 입력을 받음 
int main(void) {
	char a[100];
	gets_s(a, sizeof(a)); //C11 표준부터 버퍼의 크기를 철저히 지킴
	printf("%s\n", a);
	//만약 범위를 넘으면 런타임 오류 발생
	system("pause");
	return 0;
}