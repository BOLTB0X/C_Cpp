#include <stdio.h>

int main() {
	int a=10;
	
	int *ptr;
	ptr=&a;
	
	int **ptr_ptr; //�������� ������ 
	ptr_ptr=&ptr;
	
	printf("a=%d\n",a);
	//10
	printf("&a=%d\n",&a);
	//�ּҰ�
	printf("ptr=%d\n",ptr);
	//�ּҰ�
	printf("&ptr=%d\n",&ptr);
	//�ּҰ�
	printf("ptr_ptr=%d\n",ptr_ptr);
	//�ּҰ�
	printf("ptr_ptr=%d\n",**ptr_ptr);
	//�ּҰ�
}
