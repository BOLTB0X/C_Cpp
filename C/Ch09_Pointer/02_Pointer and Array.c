#include<stdio.h>

int main(void) {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	printf("�� ���ҵ��� �ּ�\n");
	for (i = 0; i < 10; i++) {
		printf("�ε��� %d: %d\n", i, &a[i]);
		//�迭�� int�� 4byte�̹Ƿ� 4ĭ�� ����������
	}
	system("pause");
}