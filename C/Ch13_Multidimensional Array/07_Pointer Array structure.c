#include <stdio.h>
//������ �迭

int main(void) {
	int a[10] = { 1,2,3,4,5 };
	int* p = a; //�ּҰ�
	printf("%d\n", *(p++)); //��� 1�ǰ� ����+1=>2 
	printf("%d\n", *(++p)); //���� +1�ϰ� ��� 3
	printf("%d\n", *(p + 2));  //��� 5
	system("pause");
	return 0;
}