#include <stdio.h>

void function(void) {
	printf("It's my function.\n");
}

int main(void) {
	printf("%d\n", function);
	system("pause");
	return 0;
}