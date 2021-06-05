#include <stdio.h>

int main(void) {
	//문자형 1개 입력을 받을 때
	//getchar() 함수 이용
	char a = getchar();
	printf("%c\n", a);
	//내부적으로 Buffer 이용
	system("pause");
}