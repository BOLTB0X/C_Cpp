#include <stdio.h>

int main(void) {
	char a[20] = "kkkk";
	char b[20] = "Hojoon Seok";

	//strcpy():문자열 복사 C에서는 a=b이면 간단한 방식으로 문자열복사X
	strcpy(a, b); //a가 b로 복사됨
	printf("복사된 문자열:%s\n", a);
	system("pause");
	return 0;
}