#include <stdio.h>
#include <stdlib.h>
//알파벳 출력
int main() {
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char));
	if (pc == NULL) {
		printf("동적메모리 실패\n");
		exit(1);
	}
	//*pc가 가르키는 포인터를 1씩 증가시킴 
	for (i = 0; i < 26; i++) {
		*(pc + i) = 'a' + i;  //*(pc) =pc[0]=> *(pc+1)==pc[1] 다음 주소에 메모리 할당 
	}
	//아스키 코드에서 0은 NULL을 의미
	*(pc + i) = 0;
	printf("%s\n", pc);
	free(pc); //메모리 할당해제d 
	return 0;
}