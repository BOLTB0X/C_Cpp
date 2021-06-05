#include <stdio.h>

int main(void) {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *b = a; //포인터 변수 b가 배열 a를 가르킴
	printf("포인터를 이용하여 배열이용\n");
	printf("%d\n", b[2]);
	system("pause");
}