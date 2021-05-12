#include <stdio.h>
#include <stdlib.h>

int main(){
	int *pi,i,j;
	pi=(int *)malloc(5 * sizeof(int));
	if(pi==NULL){
		printf("동적메모리 할당실패\n");
		exit(1);
	}
	for (i==0;i<5;i++){
		pi[i]=(i+1)*100;
	}
	for (j=0;j<5;j++){
		printf("%d\n",*(pi+j));
	}
	
	return 0;
}
