#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//buffer란 임시적으로 특정한 데이터를 저장하기 위한 용도
	//내부적으로 Buffer 이용
	//오류인 경우 
	int a;
	char c;
	scanf("%d", &a); //enter 즉 공백또한 문자로 받아드림
	printf("%d\n", a);
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
}