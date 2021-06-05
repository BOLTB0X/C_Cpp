#include <stdio.h>
#include <stdlib.h>
//2차원 배열 포인터
int main(void) {
	int** p = (int**)malloc(sizeof(int*) * 3); //행 생성
	for (int i = 0; i < 3; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * 3);
	}// 행마다 열을 채우며 메모리 할당
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			*(*(p + i) + j) = i * 3 + j;
		}// 행마다 열에 값을 할당
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