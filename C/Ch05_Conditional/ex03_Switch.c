#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a;
	printf("������ �Է��ϼ���.");
	scanf("%c", &a);
	switch (a){
	case 'A':
		printf("A�����Դϴ�.\n");
	case 'B':
		printf("B�����Դϴ�.\n");
	case 'C':
		printf("C�����Դϴ�.\n");
	default:
		printf("������ �ٸ��� �Է��ϼ���.\n");
	}
	system("pause");
}