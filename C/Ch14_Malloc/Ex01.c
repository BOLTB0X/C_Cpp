#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// ���������� c�� ���ÿ��� �޸����� �����൵ ��
	int* a = malloc(sizeof(int)); //�������� �Ҵ�
	printf("%d\n", a);
	a = malloc(sizeof(int));
	printf("%d\n", a);
	system("pause");
	return 0;
}