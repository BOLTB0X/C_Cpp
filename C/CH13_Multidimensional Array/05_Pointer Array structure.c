#include <stdio.h>

int main(void) {
	double b[10];
	//double 형이므로 8byte 즉 인덱스 1개당 8씩 떨어진 주소값을 할당받음
	printf("%d %d\n", b, b + 9);
	system("pause");
	return 0;
}