#include <stdio.h>
//포인터 배열

int main(void) {
	int a[10] = { 1,2,3,4,5 };
	int* p = a; //주소값
	printf("%d\n", *(p++)); //출력 1되고 증가+1=>2 
	printf("%d\n", *(++p)); //증가 +1하고 출력 3
	printf("%d\n", *(p + 2));  //출력 5
	system("pause");
	return 0;
}