#include <stdio.h>
//������ �迭

int main(void) {
	int a[5] = { 1,2,3,4,5 };
	int* b = a; //�迭�� �̸��� �迭�� ������ ù ��° �ּҰ� ��
	int* c = &a[0];
	printf("%d\n", b[2]);
	printf("%d\n", c[2]);

	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", a + i); //4byte �� �̵�
	}
	system("pause");
	return 0;
}