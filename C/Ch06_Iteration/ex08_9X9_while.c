#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Ư�������� ������ ����ϱ�
int main(void) {
	int i = 1;
	while (i <= 9) {
		int j = 1;
		while (j<=9) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
	}
	system("pause");
	return 0;
}