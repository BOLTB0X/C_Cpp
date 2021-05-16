#include <stdio.h>

int main() {
	int a=10;
	int *ptr_a=&a; //포인터가 가르키는 값이 아닌 a의 주소를 저장
	
	printf("ptr_a= %d\n",ptr_a);
	printf("ptr_a+1= %d\n",ptr_a+1);
	//포인터 +1을 하면  int=> 4가 증가 
	
} 
