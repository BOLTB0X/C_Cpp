#include <stdio.h>

int main() {
	int a=10;
	
	int *ptr;
	ptr=&a;
	
	int **ptr_ptr; //포인터의 포인터 
	ptr_ptr=&ptr;
	
	printf("a=%d\n",a);
	//10
	printf("&a=%d\n",&a);
	//주소값
	printf("ptr=%d\n",ptr);
	//주소값
	printf("&ptr=%d\n",&ptr);
	//주소값
	printf("ptr_ptr=%d\n",ptr_ptr);
	//주소값
	printf("ptr_ptr=%d\n",**ptr_ptr);
	//주소값
}
