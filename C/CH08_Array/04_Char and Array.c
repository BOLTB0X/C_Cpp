#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//c������ Ư���� �ε����� ���ڿ� �ٷ� ���� ����
int main(void) {
	char a[20] = "Hello World";
	a[4] = ',';
	printf("%s\n", a);
	system("pause");
}