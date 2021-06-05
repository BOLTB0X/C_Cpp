#include <stdio.h>

//주소연산자 & ==> 변수 앞에 붙어서 변수의 메모리 시작 주소 값을 구함
//포인터 * ==> 포인터 변수를 선언할 때 사용
//간접 참조 연산자 * ==> 선언된 포인터 변수가 가리키는 변수를 구함

int main(void) {
	int a = 5;
	int *b = &a;
	printf("a의 주소값: %d\n", &a);
	printf("포인터 변수 b가 가르키는 변수값 %d\n", *b);
	printf("포인터 변수 b의 주소값 %d\n", b);
	system("pause");
}
