#include <stdio.h>

int main(void) {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int *b = a; //������ ���� b�� �迭 a�� ����Ŵ
	printf("�����͸� �̿��Ͽ� �迭�̿�\n");
	printf("%d\n", b[2]);
	system("pause");
}