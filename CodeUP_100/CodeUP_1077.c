#include <stdio.h>

int main() {
	
	int i; 
	int num = 0;

	scanf("%d", &i);
	do
	{
		printf("%d\n", num);
		num += 1;
	} while (num <= i);
}

