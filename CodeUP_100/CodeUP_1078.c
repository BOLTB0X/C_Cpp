#include <stdio.h>

int main() {
	
	int i,j; 
	int total = 0;
	int num = 1;
	
	scanf("%d", &i);
	for(j=1;j<=i;j++)
	{
		if (num % 2 == 0)
		{
			total = total + num;
		}
		num++;
	} 
	printf("%d\n", total);
}

