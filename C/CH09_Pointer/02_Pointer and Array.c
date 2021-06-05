#include<stdio.h>

int main(void) {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	printf("각 원소들의 주소\n");
	for (i = 0; i < 10; i++) {
		printf("인덱스 %d: %d\n", i, &a[i]);
		//배열이 int형 4byte이므로 4칸씩 떨어져있음
	}
	system("pause");
}