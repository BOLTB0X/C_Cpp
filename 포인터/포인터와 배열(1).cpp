#include <stdio.h>

int main() {
	int a=10;
	int *ptr_a=&a; //�����Ͱ� ����Ű�� ���� �ƴ� a�� �ּҸ� ����
	
	printf("ptr_a= %d\n",ptr_a);
	printf("ptr_a+1= %d\n",ptr_a+1);
	//������ +1�� �ϸ�  int=> 4�� ���� 
	
} 
