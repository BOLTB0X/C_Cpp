#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int size;
	printf("���� �޸� ũ�⸦ �Է� (GB):  ");
	scanf("%d", &size);
	if (size >=16) {
		printf("���� �޸� ũ�Ⱑ ���\n");
	}
	else {
		printf("���� �޸𸮸� �����ϼ���\n");
	}
	system("pause");
}