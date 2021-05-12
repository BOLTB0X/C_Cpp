#include <stdio.h>
#include <stdlib.h>

int main(){
	int *pi; //Pointer Integer
	pi=(int *)malloc(sizeof(int)); //malloc =메모리를 할당 
	if (pi==NULL){
		printf("동적 메모리 할당에 실패\n");
		exit(-1);
	}
	*pi=100;
	printf("%d\n",*pi);
	free(pi);
	return 0;
}
