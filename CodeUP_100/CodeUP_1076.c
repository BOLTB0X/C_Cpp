#include <stdio.h>

int main() {
	
	char c; 
	char al = 'a';

	scanf("%c", &c);
	do
	{
		printf("%c ", al);
		al += 1;
	} while (al <= c);
}
