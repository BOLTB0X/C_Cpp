#include <stdio.h>
#include <limits.h>
int main(void) {
	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
	int i, maxValue = INT_MIN;
	for (i = 0; i < 10; i++) {
		if (maxValue < a[i]) //만약 최대값이 작다면
			maxValue = a[i]; //교체
	}
	printf("%d\n", maxValue);
	system("pause");
}