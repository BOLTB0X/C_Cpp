#include <stdio.h>
//OS는 메모리 공간을 4가지로 구분
//코드영역(소스코드),데이터영역(전역/정적변수)
//힙 영역(동적할당변수), 스택영역(지역/매개변수)

//정적변수 ==> 프로그램에서 특정한 블록(block)에서만 접근
//프로그램이 실행될때마다 메모리에 할당, 종료되면 메모리 해제
//메모리의 데이터(data)영역에 적재

void process() {
	static int a = 5; //정적변수
	a += 1;
	printf("%d\n", a);
}
int main(void) {
	process();
	process();
	process();
	system("pause");
	return 0;
}