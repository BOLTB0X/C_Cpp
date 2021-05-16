#include <stdio.h>

int main(){
	int a=10;
	int b=20;
	
	int *ptr; //주소를 가르키는 변수 
	
	ptr=&a; //&는 주소 값 
	
	printf("%d\n",*ptr);
	//포인터 변수 값 10
	
	ptr=&b;
	printf("%d\n",*ptr);
	//포인터 변수 값 20
	 
	 
}
