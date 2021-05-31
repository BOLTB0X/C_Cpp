#include <stdio.h>

void myfunction(void) {
	printf("It's my function.\n");
}
void yourfunction(void) {
	printf("It's your function.\n");
}

int main(void) {
	void (*fp)() = myfunction;
	fp();
	fp = yourfunction;
	fp();
	system("pause");
	return 0;
}