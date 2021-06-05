#include <stdio.h>
//시프트 연산자 
int main()
{
	unsigned char num1 = 3;     //  3: 0000 0011
	unsigned char num2 = 24;    // 24: 0001 1000

	printf("%u\n", num1 << 3);  // 24: 0001 1000: num1의 비트 값을 왼쪽으로 3번 이동
	printf("%u\n", num2 >> 2);  //  6: 0000 0110: num2의 비트 값을 오른쪽으로 2번 이동
	system("pause");
	return 0;
}