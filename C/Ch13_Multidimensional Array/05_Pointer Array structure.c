#include <stdio.h>

int main(void) {
	double b[10];
	//double ���̹Ƿ� 8byte �� �ε��� 1���� 8�� ������ �ּҰ��� �Ҵ����
	printf("%d %d\n", b, b + 9);
	system("pause");
	return 0;
}