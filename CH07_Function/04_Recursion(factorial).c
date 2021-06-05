#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int a) {
	if (a == 1) return 1;
	else return a * factorial(a - 1);
}
int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
}