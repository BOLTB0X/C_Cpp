#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a;
	printf("������ �Է��ϼ���.");
	scanf("%c", &a);
	switch (a) {
	case 'A' :
		printf("A�����Դϴ�.\n");
		break;
	case 'B' :
		printf("B�����Դϴ�.\n");
		break;
	case 'C' :
		printf("C�����Դϴ�.\n");
		break;
	default:
		printf("������ �ٸ��� �Է��ϼ���.\n");
	}
	system("pause");
}