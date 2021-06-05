#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//r 파일에 접근하여 데이터 읽기
//w 파일에 접근하여 데이터 기록 (파일이 존재하면 덮어쓰기 )
//a 파일에 접근하여 데이터를 뒤에서 기록
int main(void) {
	char s[20] = "Hello World";
	FILE* fp;
	fp = fopen("temp.txt", "w");
	fprintf(fp, "%s\n", s);
	fclose(fp);
	return 0;
}