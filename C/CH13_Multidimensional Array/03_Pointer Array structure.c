#include <stdio.h>
//배열의 이름은 배열의 첫 번째 원소의 주소
int main(void) {
	int a[5] = { 1,2,3,4,5 };
	int *b = &a[0];
	printf("%d\n", &a);
	printf("%d\n", b);
	printf("%d\n", b[2]);
	system("pause");
	return 0;
}