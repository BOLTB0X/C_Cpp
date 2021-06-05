#include <stdio.h>

int main(void) {
	int a = 5;
	int *b = &a;
	int **c = &b;
	printf("이중 포인터 변수 C의 포인터 변수값: %d\n", **c);
	system("pause");
}