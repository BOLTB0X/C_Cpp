#include <stdio.h>

int main() {
	int n, i, j, x, y;
	int a[19][19] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		a[x-1][y-1] = 1;
	}
	for (i = 0; i < 19; i++) 
	{
		for (j = 0; j <19; j++) 
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
