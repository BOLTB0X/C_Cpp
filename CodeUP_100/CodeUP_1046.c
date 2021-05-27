#include <stdio.h>

int main() {
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	printf("%d\n",a + b + c);

	float avg = (float)(a + b + c) / 3;
	printf("%.1f\n",avg);
}

