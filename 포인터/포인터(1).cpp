#include <stdio.h>

int main(){
	int a=20;
	
	int *ptr_a; //주소를 가르키는 변수 
	
	ptr_a=&a; //&는 주소 값 
	
	printf("%d\n",a);
	//20
	printf("%d\n",&a);
	//주소값 
	printf("%d\n",ptr_a);
	//주소값 
	printf("%d\n",*ptr_a);
	//포인터 변수 값 20 
	 
}
