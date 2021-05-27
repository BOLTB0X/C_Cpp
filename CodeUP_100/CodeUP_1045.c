#include <stdio.h>

int main() {
	
	int a,b;
	scanf("%d %d",&a,&b);

	printf("%d\n",a + b);
	printf("%d\n",a - b);
	printf("%d\n",a * b);
	printf("%d\n",a / b);
	printf("%d\n",a % b);
	float c = (float)a / (float)b;
	printf("%.2f\n",c);
}

