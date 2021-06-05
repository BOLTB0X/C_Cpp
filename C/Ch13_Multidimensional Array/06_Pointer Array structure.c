#include <stdio.h>
//배열을 포인터처럼 사용해서 원소를 접근가능
int main(void) {
	int a[5] = { 1,2,3,4,5 };
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d ", *(a + i)); //각 주소지로 출력
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%d\n", a[i]);	
	}
	system("pause");
	return 0;
}