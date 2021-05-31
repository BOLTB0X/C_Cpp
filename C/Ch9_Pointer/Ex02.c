#include <stdio.h>

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\n", &a[i]);
		//각 배열의 원소들이 저장되어있는 주소값들이 출력
	}
	return 0;
}