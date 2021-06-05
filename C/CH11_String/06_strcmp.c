#include <stdio.h>

int main(void) {
	char a[20] = "Kyungheon Lee";
	char b[20] = "Hojoon Seok";
	//strcmp():문자열a가 문자열b보다 사전적으로 앞이면 -1 뒤면 1 반환
	printf("두 배열의 사전 순 비교:%d\n", strcmp(a, b));
	system("pause");
	return 0;
}