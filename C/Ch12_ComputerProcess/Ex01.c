#include <stdio.h>
//OS는 메모리 공간을 4가지로 구분
//코드영역(소스코드),데이터영역(전역/정적변수)
//힙 영역(동적할당변수), 스택영역(지역/매개변수)

//전역변수 ==> 어디서든 접근 가능한 변수, main()함수 실행 전에 메모리할당
//메모리의 데이터(data)영역에 적재
int a = 5;

	int changeValue() {
		a = 10;
	}
int main(void) {
	printf("%d\n", a);
	changeValue();
	printf("%d\n", a);
	system("pause");
	return 0;
}