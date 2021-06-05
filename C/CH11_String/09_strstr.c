#include <stdio.h>

int main(void) {
	//strstr(): 긴 문자열에서 짧은 문자열을 찾아 반환
	// 짧은 문자열을 찾은 주소 값 자체를 반환 단순히 출력하도록 하면 찾은 이후 모든 문자열 반환
	char c[20] = "I like you";
	char d[20] = "like";
	//만약 변수를 선얼 할 거면
	//char* ptr = strstr(c, d);
	printf("찾은 문자열:%s\n", strstr(c, d));
	//printf("찾은 문자열:%s\n", *ptr);
	//like you
	system("pause");
	return 0;
}