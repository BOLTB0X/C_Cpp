#include <stdio.h>

int main() {
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	printf("arr=%d\n",arr);
	// arr==&arr[0] 같은 말 
	
	for (int i=0;i<10;i++){
		printf("arr[%d] = %d\n",i,&arr[i]);
		//메모리 상에서도 배열처럼 다다닥 붙어있음 
		printf("arr + %d = %d\n",i,arr+i);
		//윗 줄과 같은 값 
	}
	 
}
