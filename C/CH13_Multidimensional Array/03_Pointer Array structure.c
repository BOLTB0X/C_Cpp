#include <stdio.h>
//�迭�� �̸��� �迭�� ù ��° ������ �ּ�
int main(void) {
	int a[5] = { 1,2,3,4,5 };
	int *b = &a[0];
	printf("%d\n", &a);
	printf("%d\n", b);
	printf("%d\n", b[2]);
	system("pause");
	return 0;
}