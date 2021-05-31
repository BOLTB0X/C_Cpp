#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a;
	printf("학점을 입력하세요.");
	scanf("%c", &a);
	switch (a){
	case 'A':
		printf("A학점입니다.\n");
	case 'B':
		printf("B학점입니다.\n");
	case 'C':
		printf("C학점입니다.\n");
	default:
		printf("학점을 바르게 입력하세요.\n");
	}
	system("pause");
}