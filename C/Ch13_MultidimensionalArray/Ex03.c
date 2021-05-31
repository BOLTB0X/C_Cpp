#include <stdio.h>
//포인터 배열

int main(void) {
	int a[5] = { 1,2,3,4,5 };
	int* b = a; //배열의 이름은 배열의 원소의 첫 번째 주소가 됨
	int* c = &a[0];
	printf("%d\n", b[2]);
	printf("%d\n", c[2]);

	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", a + i); //4byte 씩 이동
	}
	system("pause");
	return 0;
}