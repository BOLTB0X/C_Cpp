#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� scanf()�Լ��� ������ ���� �� ���� �Է�
int main(void) {
	char a[100];
	gets(a); //������� �����Ͽ� �� �����Է�
	printf("%s\n", a);
	system("pause");
	return 0;
}