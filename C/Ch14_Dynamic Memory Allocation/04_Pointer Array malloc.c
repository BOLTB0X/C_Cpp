#include <stdio.h>
#include <stdlib.h>
//2���� �迭 ������
int main(void) {
	int** p = (int**)malloc(sizeof(int*) * 3); //�� ����
	for (int i = 0; i < 3; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * 3);
	}// �ึ�� ���� ä��� �޸� �Ҵ�
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			*(*(p + i) + j) = i * 3 + j;
		}// �ึ�� ���� ���� �Ҵ�
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
	free(p);
	system("pause");
	return 0;
}