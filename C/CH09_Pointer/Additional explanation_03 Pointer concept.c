#include <stdio.h>

int main() {
	int a = 10;

	int *ptr;
	ptr = &a;
	printf("%d\n", a);
	//10

	*ptr = 20;
	printf("%d\n", a);
	//20
}