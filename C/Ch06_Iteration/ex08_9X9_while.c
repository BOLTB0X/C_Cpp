#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//특정숫자의 구구단 출력하기
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