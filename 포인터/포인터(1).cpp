#include <stdio.h>

int main(){
	int a=20;
	
	int *ptr_a; //�ּҸ� ����Ű�� ���� 
	
	ptr_a=&a; //&�� �ּ� �� 
	
	printf("%d\n",a);
	//20
	printf("%d\n",&a);
	//�ּҰ� 
	printf("%d\n",ptr_a);
	//�ּҰ� 
	printf("%d\n",*ptr_a);
	//������ ���� �� 20 
	 
}
