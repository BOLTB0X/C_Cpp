#include <stdio.h>
//OS는 메모리 공간을 4가지로 구분
//코드영역(소스코드),데이터영역(전역/정적변수)
//힙 영역(동적할당변수), 스택영역(지역/매개변수)

//레지스터 변수 ==> 메인 메모리 대신 CPU의 레지스터를 사용하는 변수
//레지스터가 매우 한정되어있음, 실제로 레지스터에서 처리될지 장담 X

int main(void) {
	register int a = 10, i;
	for (i = 0; i < a; i++) {
		printf("%d ", i);
	}
	printf("\n");
	system("pause");
	return 0;
}