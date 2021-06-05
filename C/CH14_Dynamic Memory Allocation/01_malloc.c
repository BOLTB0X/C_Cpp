#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// 전통적으로 c는 스택영역 메모리해제 안해줘도 됨
	int* a = malloc(sizeof(int)); //힙영역에 할당
	printf("%d\n", a);
	a = malloc(sizeof(int));
	printf("%d\n", a);
	system("pause");
	return 0;
}