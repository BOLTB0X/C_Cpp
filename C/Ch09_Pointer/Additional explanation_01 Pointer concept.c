#include <stdio.h>

int main() {
	int a = 20;

	int *ptr_a; //�ּҸ� ����Ű�� ���� 

	ptr_a = &a; //&�� �ּ� �� 

	printf("a: %d\n", a);
	//20
	printf("&a: %d\n", &a);
	//�ּҰ� 
	printf("ptr_a: %d\n", ptr_a);
	//�ּҰ� 
	printf("*ptr_a: %d\n", *ptr_a);
	//������ ���� �� 20 
}