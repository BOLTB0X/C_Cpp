#include <stdio.h>
#include <stdlib.h>

int main(){
	int *pi; //Pointer Integer
	pi=(int *)malloc(sizeof(int)); //malloc =�޸𸮸� �Ҵ� 
	if (pi==NULL){
		printf("���� �޸� �Ҵ翡 ����\n");
		exit(-1);
	}
	*pi=100;
	printf("%d\n",*pi);
	free(pi);
	return 0;
}
