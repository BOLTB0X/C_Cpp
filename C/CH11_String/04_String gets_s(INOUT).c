#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//gets()�Լ��� ������ ũ�⸦ ����� �Է��� ���� 
int main(void) {
	char a[100];
	gets_s(a, sizeof(a)); //C11 ǥ�غ��� ������ ũ�⸦ ö���� ��Ŵ
	printf("%s\n", a);
	//���� ������ ������ ��Ÿ�� ���� �߻�
	system("pause");
	return 0;
}