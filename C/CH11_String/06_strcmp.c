#include <stdio.h>

int main(void) {
	char a[20] = "Kyungheon Lee";
	char b[20] = "Hojoon Seok";
	//strcmp():���ڿ�a�� ���ڿ�b���� ���������� ���̸� -1 �ڸ� 1 ��ȯ
	printf("�� �迭�� ���� �� ��:%d\n", strcmp(a, b));
	system("pause");
	return 0;
}