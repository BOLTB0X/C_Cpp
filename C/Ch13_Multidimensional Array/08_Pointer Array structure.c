#include <stdio.h>
//2���� �迭 ���� �����ͷ� ó������

int main(void) {
	int a[2][5] = { { 1,2,3,4,5 },
					{6,7,8,9,10} };
	int(*p)[5] = a[1]; //ũ�Ⱓ 5�� ������ �迭�� 2���� �迭�� 1���� ����
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", p[0][i]);
	}
	system("pause");
	return 0;
}