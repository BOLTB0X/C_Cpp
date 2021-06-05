#include <stdio.h>
//문자열 ==> 문자들의 arr
//문자열은 메모리 구조상 마지막에 NULL값을 포함
//즉 컴퓨터 printf함수는 NULL값을 만나기 전까지 출력
int main(void) {
	char* a = "Hello World";
	printf("%s\n", a);
	system("pause");
	return 0;
}