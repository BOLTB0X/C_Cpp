#include <stdio.h>

int main(void) {
	char a[20] = "kkkk";
	char b[20] = "Hojoon Seok";

	//strcat(): �ڿ��ִ� ���ڿ��� �տ� ���ڿ��� ��ħ
	strcat(a, b);
	printf("������ ��� ���ڿ�:%s\n", a);
	system("pause");
	return 0;
}