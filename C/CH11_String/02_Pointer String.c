#include <stdio.h>
//포인터로 문자열을 선언했으면 기존 arr처럼 처리가능 

int main(void) {
	char* a = "Hello World"; //포인터변수에 문자열 저장
	printf("%c\n", a[1]);
	printf("%c\n", a[4]);
	printf("%c\n", a[8]);
	system("pause");
	return 0;
}