#include <stdio.h>
//2차원 배열 또한 포인터로 처리가능

int main(void) {
	int a[2][5] = { { 1,2,3,4,5 },
					{6,7,8,9,10} };
	int(*p)[5] = a[1]; //크기간 5인 포인터 배열에 2차원 배열의 1행을 넣음
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", p[0][i]);
	}
	system("pause");
	return 0;
}