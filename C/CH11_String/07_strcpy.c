#include <stdio.h>

int main(void) {
	char a[20] = "kkkk";
	char b[20] = "Hojoon Seok";

	//strcpy():���ڿ� ���� C������ a=b�̸� ������ ������� ���ڿ�����X
	strcpy(a, b); //a�� b�� �����
	printf("����� ���ڿ�:%s\n", a);
	system("pause");
	return 0;
}