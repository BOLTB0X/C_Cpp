#include <stdio.h>

int main() {
	
	int c;
	    reload:

	scanf("%d",&c);
	
	if (c != 0)
	{
		printf("%d\n", c);
		goto reload;
	}

}
