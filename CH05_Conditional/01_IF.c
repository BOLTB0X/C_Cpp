#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	printf("�մ��� �� �� �Գ���? ");
	int a;
	scanf("%d", &a);
	if (a == 1 || a == 2) {
		printf("2�μ����� �ȳ�\n");
	}
	else if (a == 3 || a == 4) {
		printf("4�μ����� �ȳ�\n");
	}
	else {
		printf("���������� �ȳ�\n");
	}
	system("pause");
}