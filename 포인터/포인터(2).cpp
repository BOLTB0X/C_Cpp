#include <stdio.h>

int main(){
	int a=10;
	int b=20;
	
	int *ptr; //�ּҸ� ����Ű�� ���� 
	
	ptr=&a; //&�� �ּ� �� 
	
	printf("%d\n",*ptr);
	//������ ���� �� 10
	
	ptr=&b;
	printf("%d\n",*ptr);
	//������ ���� �� 20
	 
	 
}
