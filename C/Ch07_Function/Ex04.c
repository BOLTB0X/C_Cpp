#include <stdio.h>
#define _CRT_SECURE_NO_WARINGS

int factorial(int a) {
	if (a == 1) return 1;
	else return a * factorial(a-1);
}
int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
}