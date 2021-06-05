#include <stdio.h>

int main(void) {
	char a[20] = "kkkk";
	char b[20] = "Hojoon Seok";

	//strcat(): 뒤에있는 문자열을 앞에 문자열에 합침
	strcat(a, b);
	printf("합쳐진 결과 문자열:%s\n", a);
	system("pause");
	return 0;
}