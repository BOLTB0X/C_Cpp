#include <stdio.h>

int main() {
	
	int i=1,num;
	int total = 0;

	scanf("%d",&num);
	while(i <= num)
	{
		total = total + i;
		
		
		if (total >= num)
		{
			printf("%d", i);
			break;
		}
		i++;
	}
}

