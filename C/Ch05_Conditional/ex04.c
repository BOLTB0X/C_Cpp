#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	printf("���� �Է��ϼ���.");
	scanf("%d", &a);
	switch (a) {
	case 1: case 2: case 3:
		printf("��\n"); break;
	case 4:	case 5:	case 6:
		printf("����\n"); break;
	case 7: case 8: case 9: 
		printf("����\n"); break;
	case 10: case 11: case 12:
		printf("�ܿ�\n");
	}
	system("pause");
}