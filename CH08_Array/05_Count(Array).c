#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char a[] = "Hello World";
	int cnt = 0;
	for (int i = 0; i <= 10; i++) {
		if (a[i] == 'l') cnt++;
	}
	printf("%d\n", cnt);
	system("pause");
}