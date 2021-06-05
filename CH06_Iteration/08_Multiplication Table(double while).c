#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//모든 구구단 출력
int main(void) {
	int i = 1;
	while (i <= 9) {
		int j = 1;
		while (j <= 9) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
	}
	system("pause");
	return 0;
}