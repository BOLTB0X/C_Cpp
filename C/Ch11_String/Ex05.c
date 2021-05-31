#include <stdio.h>

int main(void) {
	char a[20] = "Dongbin Na";
	char b[20] = "Hojoon Seok";
	//strlen():문자열의 길이를 반환
	printf("문자열의 길이:%d\n", strlen(a));
	//strcmp():문자열a가 문자열b보다 사전적으로 앞이면 -1 뒤면 1 반환
	printf("두 배열의 사전 순 비교:%d\n", strcmp(a, b));
	//strcpy():문자열 복사 C에서는 a=b이면 간단한 방식으로 문자열복사X
	strcpy(a, b); //a가 b로 복사됨
	printf("복사된 문자열:%s\n", a);
	//strcat(): 뒤에있는 문자열을 앞에 문자열에 합침
	strcat(a, b);
	printf("합쳐진 결과 문자열:%s\n",a);
	//strstr(): 긴 문자열에서 짧은 문자열을 찾아 반환
	// 짧은 문자열을 찾은 주소 값 자체를 반환 단순히 출력하도록 하면 찾은 이후 모든 문자열 반환
	char c[20] = "I like you";
	char d[20] = "like";
	//만약 변수를 선얼 할 거면
	//char* ptr=strstr(c,d)
	printf("찾은 문자열:%s\n", strstr(c, d));
	//like you
	system("pause");
	return 0;
}