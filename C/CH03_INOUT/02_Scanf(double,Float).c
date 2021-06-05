#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//소수점 둘째자리까지 출력
int main(void) {
	double a;
	scanf("%lf", &a);
	printf("%.2f\n", a);
	system("pause");
	return 0;
}